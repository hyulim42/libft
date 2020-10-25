/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:21:36 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 17:40:57 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void						*ft_memset(void *b, int c, size_t len)
{
	unsigned		char	*ptr;
	unsigned		char	val;

	val = (unsigned char)c;
	ptr = (unsigned char*)b;
	while (len-- > 0)
		*ptr++ = val;
	return (b);
}
