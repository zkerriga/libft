/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:31:45 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 16:17:30 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (!src)
		return (0);
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (*src && --size > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
