/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_new_line.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 06:41:12 by zkerriga          #+#    #+#             */
/*   Updated: 2020/07/30 06:41:18 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEW_LINE_H
# define GET_NEW_LINE_H

# include "libft.h"

typedef enum	e_gnl
{
	ERR_FD = -3,
	ERR_READ,
	ERR_MALLOC,
	END,
	READ
}				t_gnl;

t_gnl	get_new_line(int fd, char **line);

#endif
