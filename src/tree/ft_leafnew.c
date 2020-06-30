/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leafnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 09:05:20 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/17 23:16:26 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tree	*ft_leafnew(void *content)
{
	t_tree	*leaf;

	leaf = (t_tree *)malloc(sizeof(t_tree));
	if (leaf)
	{
		leaf->content = content;
		leaf->left = NULL;
		leaf->right = NULL;
	}
	return (leaf);
}
