/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 18:42:32 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:16:31 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list			*cur;
	t_list			*next;

	if (lst == NULL || f == NULL)
		return ;
	cur = lst;
	while (cur != NULL)
	{
		next = cur->next;
		f(cur->content);
		cur = next;
	}
}
