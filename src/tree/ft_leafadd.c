/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leafadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 10:21:52 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/10 10:22:33 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_leafadd(t_tree **tree, t_tree *fresh, int (*f_cmp)(void *, void *))
{
	if (*tree)
	{
		if (f_cmp((*tree)->content, fresh->content) < 0)
			ft_leafadd(&(*tree)->left, fresh, f_cmp);
		else
			ft_leafadd(&(*tree)->right, fresh, f_cmp);
	}
	else
		*tree = fresh;
}
