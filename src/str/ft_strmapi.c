/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 15:42:42 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 15:42:57 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	register unsigned int	i;
	char					*fresh;

	if (!s)
		return (NULL);
	if ((fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
	{
		i = 0;
		while (*s)
		{
			fresh[i] = f(i, *s++);
			++i;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
