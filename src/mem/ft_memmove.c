/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:01:53 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 16:09:30 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	register unsigned char			*mem;
	register const unsigned char	*src_copy;

	if (n == 0 || (!dest && !src))
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		mem = dest;
		src_copy = src;
		while (n-- > 0)
			mem[n] = src_copy[n];
	}
	return (dest);
}
