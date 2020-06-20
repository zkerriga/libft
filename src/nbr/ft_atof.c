/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 22:34:03 by zkerriga          #+#    #+#             */
/*   Updated: 2020/06/20 22:34:20 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_miss_and_get_sign(const char **nptr)
{
	int	sign;

	sign = 1;
	while (ft_isspace(**nptr))
		++(*nptr);
	if (**nptr == '-')
	{
		sign = -1;
		++(*nptr);
	}
	else if (**nptr == '+')
		++(*nptr);
	return (sign);
}

float		ft_atof(const char *nptr)
{
	float	number;
	float	after_dot;
	int		sign;

	number = 0.0f;
	sign = ft_miss_and_get_sign(&nptr);
	while (ft_isdigit(*nptr))
		number = number * 10 + (*nptr++ - '0') * sign;
	if (*nptr++ == '.')
	{
		after_dot = 0.1f;
		while (ft_isdigit(*nptr))
		{
			number += (*nptr++ - '0') * sign * after_dot;
			after_dot /= 10;
		}
	}
	return (number);
}
