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
	unsigned int	i;
	unsigned char	*mem;

	if (n == 0 || (!dest && !src))
		return (dest);
	mem = dest;
	i = 0;
	if (dest < src)
		while (i++ < n)
			*mem++ = *(unsigned char *)src++;
	else
		while (n-- > 0)
			mem[n] = *((unsigned char *)src + n);
	return (dest);
}
