/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 11:05:27 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/05 22:30:21 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbr_len(int nbr)
{
	size_t	len;

	len = 1;
	if (nbr < 0)
		len++;
	while (nbr / 10 != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		tmp;

	len = ft_nbr_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str)
	{
		str[len--] = '\0';
		while (n / 10 != 0)
		{
			tmp = (n < 0) ? -(n % 10) : n % 10;
			str[len--] = tmp + '0';
			n = n / 10;
		}
		if (n < 0)
		{
			str[len] = -n + '0';
			str[0] = '-';
		}
		else
			str[len] = n + '0';
	}
	return (str);
}
