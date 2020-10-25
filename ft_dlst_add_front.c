/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 02:00:47 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 03:02:18 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dnode		*ft_dlst_add_front(t_dlist *lst, void *cont)
{
	return (ft_dlst_insert(lst, lst->head->next, cont)); 
}
