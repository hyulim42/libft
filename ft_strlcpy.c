/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 08:43:43 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:18:41 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *restrict dst, const char *restrict src
		, size_t dstsize)
{
	size_t			ret;
	size_t			len;

	if (dstsize == 0)
		return (ft_strlen(src));
	ret = ft_strlen(src);
	if (ret < dstsize)
		len = ret;
	else
		len = dstsize - 1;
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (ret);
}
