/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:21:14 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 16:20:29 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	len;
	char	*tmp;

	len = nmemb * size;
	mem = malloc(len);
	if (mem)
	{
		tmp = mem;
		while (len-- != 0)
			*tmp++ = 0;
	}
	return (mem);
}
