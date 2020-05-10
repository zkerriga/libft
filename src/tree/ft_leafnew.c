/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leafnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 09:05:20 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/10 10:12:14 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tree	*ft_leafnew(void *content)
{
	t_tree	*new;

	new = (t_tree *)malloc(sizeof(t_tree));
	new->content = content;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
