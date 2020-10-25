/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:25:30 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:17:16 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memcpy(void *restrict dst, const void *restrict src
		, size_t n)
{
	unsigned	char	*copy_dst;
	unsigned	char	*copy_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	copy_dst = (unsigned char *)dst;
	copy_src = (unsigned char *)src;
	while (n-- > 0)
		*copy_dst++ = *copy_src++;
	return (dst);
}
