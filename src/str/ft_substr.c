/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 15:39:17 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/07 16:41:27 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;
	size_t	length;

	if (!s)
		return (NULL);
	if ((length = ft_strlen(s)) < start)
		len = 0;
	if (length < len)
		len = length;
	if ((fresh = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = 0;
		s += start;
		while (i < len && s[i])
		{
			fresh[i] = s[i];
			++i;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
