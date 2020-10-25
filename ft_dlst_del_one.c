/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_del_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 04:21:36 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 05:20:40 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_dlst_del_one(t_dlist *lst, t_dnode *node, void (*del)(void *))
{
	t_dnode	*next;
	t_dnode	*prev;
	if (lst == NULL || node == NULL || del == NULL || lst->l_size <= 0)
		return ;
	--(lst->l_size);
	next = node->next;
	prev = node->prev;
	del(node->content);
	free(node);
	node = NULL;
	next->prev = prev;
	prev->next = next;
}
