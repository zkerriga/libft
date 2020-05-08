/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 10:31:47 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/07 16:07:46 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_c(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s && *s++ != c)
		counter++;
	return (counter);
}

static int		ft_count_words(const char **s, char c)
{
	int		counter;
	char	*tmp;

	counter = 0;
	while (**s && **s == c)
		(*s)++;
	tmp = *(char **)s;
	while (*tmp)
	{
		while (*tmp && *tmp != c)
			tmp++;
		counter++;
		while (*tmp && *tmp == c)
			tmp++;
	}
	return (counter);
}

static char		**ft_array_clear(char **array, int i)
{
	while (i-- > 0)
		free(array[i]);
	free(array);
	return (NULL);
}

static void		ft_next_pointer(char const **s, char c)
{
	*s = ft_strchr(*s, c);
	while (*s && **s && **s == c)
		(*s)++;
}

char			**ft_split(char const *s, char c)
{
	int		count;
	char	**array;
	int		i;

	if (!s)
		return (NULL);
	count = ft_count_words(&s, c);
	if ((array = (char **)malloc((count + 1) * sizeof(char *))))
	{
		i = 0;
		while (i < count)
		{
			array[i] = (char *)malloc((ft_strlen_c(s, c) + 1) * sizeof(char));
			if (array[i])
				ft_strlcpy(array[i], s, ft_strlen_c(s, c) + 1);
			else
				return (ft_array_clear(array, i));
			ft_next_pointer(&s, c);
			i++;
		}
		array[i] = NULL;
	}
	return (array);
}
