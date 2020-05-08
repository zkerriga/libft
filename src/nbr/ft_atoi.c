/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 15:44:06 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/07 16:43:47 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_miss_and_get_sign(const char **nptr)
{
	int	sign;

	sign = 1;
	while (**nptr == ' ' || **nptr == '\t' || **nptr == '\n' || **nptr == '\v'
		|| **nptr == '\f' || **nptr == '\r')
		(*nptr)++;
	if (**nptr == '-')
	{
		sign = -1;
		(*nptr)++;
	}
	else if (**nptr == '+')
		(*nptr)++;
	return (sign);
}

int			ft_atoi(const char *nptr)
{
	long		number;
	int			sign;

	number = 0;
	sign = ft_miss_and_get_sign(&nptr);
	if (*nptr < '0' && *nptr > '9')
		return (0);
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (number <= FT_MAX_LONG / 10 && number >= -(FT_MAX_LONG / 10))
			number = number * 10;
		else
			return (number < 0 ? 0 : -1);
		if (number <= FT_MAX_LONG - (*nptr - '0') &&
			number >= -(FT_MAX_LONG) - 1 + (*nptr - '0'))
			number += (*nptr++ - '0') * sign;
		else
			return (number < 0 ? 0 : -1);
	}
	return ((int)number);
}
