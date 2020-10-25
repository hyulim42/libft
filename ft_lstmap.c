/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 18:46:08 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 17:15:39 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_next;
	t_list	*next;
	t_list	*head;

	if (!lst || !(new_list = ft_lstnew(f(lst->content))))
		return (NULL);
	head = new_list;
	while (lst != NULL)
	{
		if (lst->next != NULL)
		{
			next = lst->next;
			if ((new_next = ft_lstnew(f(next->content))) == NULL)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			new_list->next = new_next;
			new_list = new_list->next;
		}
		lst = lst->next;
	}
	return (head);
}
