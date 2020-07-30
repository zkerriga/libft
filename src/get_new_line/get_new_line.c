/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_new_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 06:35:02 by zkerriga          #+#    #+#             */
/*   Updated: 2020/07/30 06:35:04 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_new_line.h"

char	*gnl_find_string(const char buffer[BUFFER_SIZE])
{
	unsigned int	n;

	n = 0;
	while (n < BUFFER_SIZE)
	{
		if (buffer[n] != 0)
			return ((char *)&buffer[n]);
		++n;
	}
	return (NULL);
}

char	*ft_strjoin_with_free(char *line, char *add_string)
{
	char	*for_free;
	char	*joined_string;

	for_free = line;
	joined_string = ft_strjoin(line, add_string);
	free(for_free);
	return (joined_string);
}

/*
** The input string is `*line`, which already has something in it.
*/

t_gnl	gnl_fd_reading(const int fd, char **line, char buffer[BUFFER_SIZE + 1],
						t_bool line_exist)
{
	int		read_result;
	char	*pointer_to_enter;

	if ((read_result = read(fd, buffer, BUFFER_SIZE)) < 0)
		return (ERR_READ);
	else if (read_result == 0)
		return (line_exist ? READ : END);
	if ((pointer_to_enter = ft_strchr(buffer, '\n')) == NULL)
	{
		if ((*line = ft_strjoin_with_free(*line, buffer)) == NULL)
			return (ERR_MALLOC);
		ft_bzero(buffer, BUFFER_SIZE);
		return (gnl_fd_reading(fd, line, buffer, TRUE));
	}
	*pointer_to_enter = '\0';
	if (pointer_to_enter - buffer > 0)
	{
		if ((*line = ft_strjoin_with_free(*line, buffer)) == NULL)
			return (ERR_MALLOC);
		ft_bzero(buffer, pointer_to_enter - buffer);
	}
	return (READ);
}

t_gnl	gnl_static_reading(const int fd, char **line, char *current,
							char buffer[BUFFER_SIZE + 1])
{
	char	*pointer_to_enter;

	if ((pointer_to_enter = ft_strchr(current, '\n')) == NULL)
	{
		if ((*line = ft_strjoin_with_free(*line, current)) == NULL)
			return (ERR_MALLOC);
		ft_bzero(current, BUFFER_SIZE - (current - buffer));
		return (gnl_fd_reading(fd, line, buffer, TRUE));
	}
	*pointer_to_enter = '\0';
	if (pointer_to_enter - current > 0)
	{
		if ((*line = ft_strjoin_with_free(*line, current)) == NULL)
			return (ERR_MALLOC);
		ft_bzero(current, pointer_to_enter - current);
	}
	return (READ);
}

/*
** The function reads strings sequentially from the file descriptor and writes
** a new string to `*line`. The function returns READ if the string was read,
** END if there is nothing else to read, and ERR_* if errors occurred.
** For ERR_* or END, an empty string is written to `*line`.
**
** The file must be compiled with the -D BUFFER_SIZE=n flag, where n > 0.
*/

t_gnl	get_new_line(const int fd, char **line)
{
	static char		buffer[BUFFER_SIZE + 1];
	char			*current;

	if ((*line = ft_strdup("")) == NULL)
		return (ERR_MALLOC);
	if (fd < 0)
		return (ERR_FD);
	if (read(fd, NULL, 0) < 0)
		return (ERR_READ);
	if ((current = gnl_find_string(buffer)) == NULL)
		return (gnl_fd_reading(fd, line, buffer, FALSE));
	else
		return (gnl_static_reading(fd, line, current, buffer));
}
