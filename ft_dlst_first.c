/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_first.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 04:55:55 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 04:59:22 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_dlst_first(t_dlist *lst)
{
	if (lst == NULL || lst->l_size <= 0)
		return (NULL);
	return (lst->head->next->content);
}
