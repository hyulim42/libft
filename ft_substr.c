/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:08:50 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:19:36 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ret;
	size_t		remain_len;

	if (s == NULL)
		return (NULL);
	if ((remain_len = ft_strlen(s)) < start)
		return ((char *)ft_calloc(1, 1));
	remain_len -= start;
	if (remain_len < len)
		len = remain_len;
	if ((ret = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	ft_memmove(ret, &s[start], len);
	ret[len] = '\0';
	return (ret);
}
