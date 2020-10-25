/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:29:01 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:17:03 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memccpy(void *restrict dst, const void *restrict src
		, int c, size_t n)
{
	unsigned	char	*copy_dst;
	unsigned	char	*copy_src;

	copy_dst = (unsigned char *)dst;
	copy_src = (unsigned char *)src;
	while (n-- > 0)
	{
		if (*copy_src == (unsigned char)c)
		{
			*copy_dst++ = *copy_src++;
			return (copy_dst);
		}
		*copy_dst++ = *copy_src++;
	}
	return (NULL);
}
