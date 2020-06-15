/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:08:53 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 22:12:07 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	register int	i;
	size_t			length;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (*big && len)
	{
		i = 0;
		length = len;
		while (length && little[i])
		{
			if (little[i] != big[i])
				break ;
			++i;
			--length;
		}
		if (little[i] == '\0')
			return ((char *)big);
		--len;
		++big;
	}
	return (NULL);
}
