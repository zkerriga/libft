/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mega_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:46:34 by zkerriga          #+#    #+#             */
/*   Updated: 2020/06/18 14:46:51 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*mega_malloc(size_t sizemem)
{
	void	*pointer;

	pointer = malloc(sizemem);
	memory_manager(pointer, M_ADD);
	return (pointer);
}
