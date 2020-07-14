/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 17:20:24 by zkerriga          #+#    #+#             */
/*   Updated: 2020/07/14 10:28:08 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_front(t_dlist **lst, t_dlist *fresh)
{
	if (fresh)
	{
		fresh->next = *lst;
		if (*lst)
			(*lst)->prev = fresh;
		*lst = fresh;
	}
}
