/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:21:46 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:17:21 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned	char	*copy_dst;
	unsigned	char	*copy_src;

	if (len == 0 || (dst == src))
		return (dst);
	if ((unsigned long long)src < (unsigned long long)dst)
	{
		copy_dst = (unsigned char *)dst + len - 1;
		copy_src = (unsigned char *)src + len - 1;
		while (--len > 0)
			*copy_dst-- = *copy_src--;
		*copy_dst = *copy_src;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
