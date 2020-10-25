/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 11:13:35 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:18:34 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *restrict dst, const char *restrict src
		, size_t dstsize)
{
	size_t			org_dst_len;
	size_t			src_len;
	size_t			ret;
	size_t			len;

	org_dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || src_len == 0 || dstsize <= org_dst_len)
	{
		ret = src_len + org_dst_len;
		if (dstsize < org_dst_len)
			ret = src_len + dstsize;
		return (ret);
	}
	ret = src_len + org_dst_len;
	if (dstsize < org_dst_len)
		ret = src_len + dstsize;
	len = dstsize - org_dst_len;
	if (len-- > src_len)
		len = src_len;
	dst += org_dst_len;
	while (len-- > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}
