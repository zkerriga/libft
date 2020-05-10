/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leaffind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 10:47:43 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/10 11:31:10 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tree	*ft_leaffind(t_tree *tree, void *content, int (*f_cmp)(void *, void *))
{
	int check;

	if (tree)
	{
		if ((check = f_cmp(tree->content, content)) == 0)
			return (tree);
		else if (check > 0)
			return (ft_leaffind(tree->right, content, f_cmp));
		else
			return (ft_leaffind(tree->left, content, f_cmp));
	}
	else
		return (NULL);
}
