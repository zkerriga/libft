/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 18:32:19 by zkerriga          #+#    #+#             */
/*   Updated: 2020/05/06 16:06:23 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*new_tmp;

	if (!lst || (new = ft_lstnew(f(lst->content))) == NULL)
		return (NULL);
	lst = lst->next;
	new_tmp = new;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&new, del);
			break ;
		}
		new_tmp->next = tmp;
		new_tmp = new_tmp->next;
		lst = lst->next;
	}
	return (new);
}
