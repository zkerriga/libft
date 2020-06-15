/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:01:53 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 16:09:10 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	register unsigned char			*dest_copy;
	register const unsigned char	*src_copy;

	dest_copy = dest;
	src_copy = src;
	while (n-- > 0 && *src_copy != (unsigned char)c)
		*dest_copy++ = *src_copy++;
	if (*src_copy == (unsigned char)c)
	{
		*dest_copy++ = (unsigned char)c;
		return (dest_copy);
	}
	return (NULL);
}
