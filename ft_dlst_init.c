/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 02:05:36 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 05:23:25 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_dlst_init(t_dlist *lst)
{
	ft_memset(lst, 0, sizeof(t_dlist));
	lst->head = &(lst->dummy_head);
	lst->tail = &(lst->dummy_tail);
	lst->head->next = lst->tail;
	lst->tail->prev = lst->head;
	lst->alloc = ft_dnode_new;
	lst->size = ft_dlst_size;
	lst->push_front = ft_dlst_add_front;
	lst->push_back = ft_dlst_add_back;
	lst->front = ft_dlst_first;
	lst->back = ft_dlst_last;
	lst->erase = ft_dlst_del_one;
	lst->pop_front = ft_dlst_del_first;
	lst->pop_back = ft_dlst_del_last;
	lst->clear = ft_dlst_clear;
	lst->iter = ft_dlst_iter;
}
