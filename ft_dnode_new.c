/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnode_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 01:59:14 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 01:59:24 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_dnode				*ft_dnode_new(void *content)
{
	t_dnode			*ret;

	if ((ret = (t_dnode *)malloc(sizeof(t_dnode))) == NULL)
		return (NULL);
	ret->content = content;
	ret->prev = NULL;
	ret->next = NULL;
	return (ret);
}
