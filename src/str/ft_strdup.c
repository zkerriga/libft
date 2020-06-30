/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:21:14 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 16:20:41 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*fresh;
	size_t	len;

	len = ft_strlen(s) + 1;
	if ((fresh = (char *)malloc(sizeof(char) * len)))
		ft_memcpy(fresh, s, len);
	return (fresh);
}
