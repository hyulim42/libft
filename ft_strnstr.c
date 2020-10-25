/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:36:04 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/23 15:19:20 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	flag_switcher(int *do_flag, const int f0, const int f1)
{
	do_flag[0] = f0;
	do_flag[1] = f1;
}

char			*ft_strnstr(const char *haystack, const char *needle
		, size_t len)
{
	char		needle_c;
	char		hay_c;
	size_t		needle_len;
	int			do_flag[2];

	if ((needle_c = *needle++) != '\0')
	{
		needle_len = ft_strlen(needle);
		flag_switcher(do_flag, 1, 1);
		while (ft_strncmp(haystack, needle, needle_len) != 0 || do_flag[0])
		{
			flag_switcher(do_flag, 0, 1);
			while (hay_c != needle_c || do_flag[1])
			{
				flag_switcher(do_flag, 0, 0);
				if ((hay_c = *haystack++) == '\0' || len-- < 1)
					return (NULL);
			}
			if (needle_len > len)
				return (NULL);
		}
		haystack--;
	}
	return ((char *)haystack);
}
