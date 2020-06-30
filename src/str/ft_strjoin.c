/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 15:40:09 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 15:40:24 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	fresh = (char *)malloc(sizeof(char) *
			(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (fresh)
	{
		tmp = fresh;
		while (*s1)
			*tmp++ = *s1++;
		while (*s2)
			*tmp++ = *s2++;
		*tmp = '\0';
	}
	return (fresh);
}
