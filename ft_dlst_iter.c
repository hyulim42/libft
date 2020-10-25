/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_iter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 04:34:15 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 04:34:46 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_dlst_iter(t_dlist *lst, void (*f)(void *))
{
	t_dnode			*cur;
	t_dnode			*next;

	if (lst == NULL || f == NULL)
		return ;
	cur = lst->head->next;
	while (cur != lst->tail)
	{
		next = cur->next;
		f(cur->content);
		cur = next;
	}
}
