/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 20:27:26 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/22 15:27:02 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void			*ft_calloc(size_t count, size_t size)
{
	void		*ret;
	size_t		full_size;

	full_size = count * size;
	if (!(ret = malloc(full_size)))
		return (NULL);
	ret = ft_memset(ret, 0, full_size);
	return (ret);
}
