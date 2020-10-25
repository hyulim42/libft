/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 18:06:14 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:16:52 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_lstsize(t_list *lst)
{
	t_list			*cur;
	int				size;

	if (lst == NULL)
		return (0);
	size = 0;
	cur = lst;
	while (cur != NULL)
	{
		cur = cur->next;
		++size;
	}
	return (size);
}
