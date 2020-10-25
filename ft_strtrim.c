/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:41:47 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/04 07:57:57 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t		ft_possible_trim(char c, char const *set)
{
	size_t			count;

	count = 0;
	while (set[count])
	{
		if (set[count++] == c)
			return (1);
	}
	return (0);
}

static	size_t		ft_get_size(char const *s1, char const *set)
{
	size_t			count;
	size_t			size;

	count = 0;
	size = ft_strlen(s1);
	while (ft_possible_trim(s1[size - count - 1], set))
		count++;
	return (size - count);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t			count;
	size_t			size;
	char			*ret;

	count = 0;
	size = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (ft_possible_trim(s1[count], set))
		count++;
	if (count == ft_strlen(s1))
		return ((char *)ft_calloc(sizeof(char), 1));
	size = ft_get_size(s1 + count, set) + 1;
	if (!(ret = (char *)malloc((size) * sizeof(char))))
		return (NULL);
	ft_strlcpy(ret, s1 + count, size);
	return (ret);
}
