/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:35:59 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:18:57 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned	int	idx;

	if (s == NULL || f == NULL)
		return (NULL);
	if ((ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	idx = 0;
	while (s[idx] != '\0')
	{
		ret[idx] = f(idx, s[idx]);
		idx++;
	}
	ret[idx] = '\0';
	return (ret);
}
