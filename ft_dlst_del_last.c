/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_del_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 05:07:32 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 05:18:45 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_dlst_del_last(t_dlist *lst, void (*del)(void *))
{
	if (lst == NULL || lst->l_size <= 0)
		return ;
	ft_dlst_del_one(lst, lst->tail->prev, del);
}
