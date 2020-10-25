/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 03:12:01 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 05:03:01 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_dlst_last(t_dlist *lst)
{
	if (lst == NULL || lst->l_size <= 0)
		return (NULL);
	return (lst->tail->prev->content);
}
