/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 02:25:43 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 03:11:16 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dnode		*ft_dlst_insert(t_dlist *lst, t_dnode *next, void *cont)
{
	t_dnode	*prev;
	t_dnode *new_node;

	if ((new_node = ft_dnode_new(cont)) == NULL)
		return (NULL);
	prev = next->prev;
	new_node->prev = prev;
	new_node->next = next;
	prev->next = new_node;
	next->prev = new_node;
	++(lst->l_size);
	return (new_node);
}
