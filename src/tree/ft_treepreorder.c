/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treepreorder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 22:37:39 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/12 10:12:12 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_treepreorder(t_tree *tree, void (*func)(void*))
{
	if (tree)
	{
		func(tree->content);
		ft_treepreorder(tree->left, func);
		ft_treepreorder(tree->right, func);
	}
}
