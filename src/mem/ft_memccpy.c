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
	while (n-- > 0 && *(unsigned char *)src != (unsigned char)c)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	if (*(unsigned char *)src == (unsigned char)c)
	{
		*(unsigned char *)dest++ = (unsigned char)c;
		return ((unsigned char *)dest);
	}
	return (NULL);
}
