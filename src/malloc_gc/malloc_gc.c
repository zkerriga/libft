/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_gc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:46:34 by zkerriga          #+#    #+#             */
/*   Updated: 2020/06/18 19:25:46 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc_gc(size_t sizemem)
{
	void	*pointer;

	pointer = malloc(sizemem);
	memory_manager(pointer, M_ADD);
	return (pointer);
}
