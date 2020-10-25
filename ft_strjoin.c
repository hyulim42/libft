/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:48:32 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:18:27 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strjoin(char const *s1, char const *s2)
{
	size_t			len;
	char			*ret;
	char			*copy_ret;

	len = 0;
	if (s1 != NULL)
		len = ft_strlen(s1);
	if (s2 != NULL)
		len += ft_strlen(s2);
	if (len == 0)
		return ((char *)ft_calloc(1, 1));
	if ((ret = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	copy_ret = ret;
	if (s1 != NULL)
		while (*s1)
			*copy_ret++ = *s1++;
	if (s2 != NULL)
		while (*s2)
			*copy_ret++ = *s2++;
	ret[len] = '\0';
	return (ret);
}
