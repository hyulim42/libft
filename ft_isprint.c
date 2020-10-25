/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:04:03 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/22 15:21:56 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isprint(int c)
{
	int			is_special;

	is_special = (c >= 0040 && c <= 0057) ||
		(c >= 0072 && c <= 0100) ||
		(c >= 0133 && c <= 0140) ||
		(c >= 0173 && c <= 0176);
	return (is_special || ft_isalpha(c) || ft_isdigit(c));
}