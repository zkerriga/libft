/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 15:13:45 by zkerriga          #+#    #+#             */
/*   Updated: 2020/06/18 15:13:54 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	delete(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void		ft_lstdelel(t_list **lst, void *content, int (*cmp)(void *, void *),
						void (*del)(void *))
{
	t_list	*tmp;
	t_list	*pre;

	if (cmp((*lst)->content, content) == 0)
	{
		tmp = (*lst)->next;
		delete(*lst, del);
		*lst = tmp;
		return ;
	}
	pre = *lst;
	tmp = pre->next;
	while (tmp)
	{
		if (cmp(tmp->content, content) == 0)
		{
			pre->next = tmp->next;
			delete(tmp, del);
			return ;
		}
		pre = pre->next;
		tmp = tmp->next;
	}
}
