/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 07:55:02 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:19:28 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strrchr(const char *s, int c)
{
	size_t				len;
	char				*ret;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + len));
	ret = NULL;
	while (len-- > 0)
	{
		if (*s == (char)c)
			ret = (char *)s;
		s++;
	}
	return (ret);
}
