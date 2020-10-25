/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 18:15:31 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:16:25 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list			*cur;
	t_list			*next;

	if (lst == NULL || del == NULL)
		return ;
	if ((cur = *lst) == NULL)
		return ;
	while (cur != NULL)
	{
		next = cur->next;
		del(cur->content);
		free(cur);
		cur = next;
	}
	*lst = NULL;
}
