/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 08:14:36 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/23 03:38:15 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			idx;

	if (n == 0)
		return (0);
	idx = 0;
	while (s1[idx] != '\0' && s2[idx] != '\0' && idx < n)
	{
		if ((unsigned char)s1[idx] - (unsigned char)s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		++idx;
	}
	if (n != idx)
		return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
	return (0);
}
