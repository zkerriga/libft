/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:38:28 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 16:14:47 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n / 10 != 0)
	{
		ft_putnbr_fd((n < 0) ? -(n / 10) : n / 10, fd);
		ft_putchar_fd((n < 0) ? -(n % 10) + '0' : n % 10 + '0', fd);
	}
	else
		ft_putchar_fd((n < 0) ? -(n % 10) + '0' : n % 10 + '0', fd);
}
