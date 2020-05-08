/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:21:07 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 16:11:13 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0 && *(unsigned char *)s1++ == *(unsigned char *)s2++)
		n--;
	return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
}
