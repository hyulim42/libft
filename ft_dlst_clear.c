/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 04:26:31 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 04:33:59 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				ft_dlst_clear(t_dlist *lst, void (*del)(void *))
{
	t_dnode			*cur;
	t_dnode			*next;

	if (lst == NULL || del == NULL || lst->l_size <= 0)
		return ;
	cur = lst->head->next;
	while (cur != lst->tail)
	{
		next = cur->next;
		del(cur->content);
		free(cur);
		cur = next;
	}
	ft_dlst_init(lst);
}
