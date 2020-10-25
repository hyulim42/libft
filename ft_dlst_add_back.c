/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_add_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 03:03:29 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 03:03:41 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dnode		*ft_dlst_add_back(t_dlist *lst, void *cont)
{
	return (ft_dlst_insert(lst, lst->tail, cont)); 
}
