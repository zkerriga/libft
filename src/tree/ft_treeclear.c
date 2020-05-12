/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 11:52:29 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/12 10:11:18 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_treeclear(t_tree **tree, void (*del)(void*))
{
	if (*tree)
	{
		ft_treeclear(&(*tree)->right, del);
		ft_treeclear(&(*tree)->left, del);
		del((*tree)->content);
		free(*tree);
		*tree = NULL;
	}
}
