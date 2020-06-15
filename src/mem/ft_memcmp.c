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
	register const unsigned char	*s1_copy;
	register const unsigned char	*s2_copy;

	s1_copy = s1;
	s2_copy = s2;
	while (n > 0 && *s1_copy++ == *s2_copy++)
		--n;
	return (*(--s1_copy) - *(--s2_copy));
}
