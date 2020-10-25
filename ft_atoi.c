/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 06:35:22 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/23 23:49:04 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int				ft_isspace(int c)
{
	unsigned	char	uc;
	int					result;

	uc = (unsigned char)c;
	result = (uc == '\t' || uc == '\n' || uc == '\v' ||
			uc == '\f' || uc == '\r' || uc == ' ');
	return (result);
}

int						ft_atoi(const char *str)
{
	unsigned	int		result;
	int					sign;
	unsigned	char	c;

	result = 0;
	sign = 1;
	while ((c = (unsigned char)*str) != '\0' && ft_isspace((int)c))
		str++;
	if ((c = (unsigned char)*str) != '\0' && (c == '+' || c == '-'))
	{
		if (c == '-')
			sign *= -1;
		++str;
	}
	while ((c = (unsigned char)*str++) != '\0' && ft_isdigit((int)c))
		result = (result * 10) + (c - '0');
	return (result * sign);
}

unsigned	int			ft_uatoi(const char *str)
{
	unsigned	int		result;
	unsigned	char	c;

	result = 0;
	while ((c = (unsigned char)*str) != '\0' && ft_isspace((int)c))
		++str;
	if ((c = (unsigned char)*str) != '\0' && c == '+')
		++str;
	while ((c = (unsigned char)*str++) != '\0' && ft_isdigit((int)c))
		result = (result * 10) + (c - '0');
	return (result);
}

char				*ft_uatoi_reel(const char *str)
{
	unsigned	char	c;

	while ((c = (unsigned char)*str) != '\0' && ft_isspace((int)c))
		++str;
	if ((c = (unsigned char)*str) != '\0' && c == '+')
		++str;
	while ((c = (unsigned char)*str) != '\0' && ft_isdigit((int)c))
		++str;
	return ((char *)str);
}
