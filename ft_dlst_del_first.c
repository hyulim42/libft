/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_del_first.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 05:06:34 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 05:06:41 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_dlst_del_first(t_dlist *lst, void (*del)(void *))
{
	if (lst == NULL || lst->l_size <= 0)
		return ;
	ft_dlst_del_one(lst, lst->head->next, del);
}
