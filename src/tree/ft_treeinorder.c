/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeinorder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 22:37:39 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/11 22:42:27 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_treeinorder(t_tree *tree, void (*func)(void*))
{
	if (tree)
	{
		ft_treepreorder(tree->left);
		func(tree->content);
		ft_treepreorder(tree->right);
	}
}
