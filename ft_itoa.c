/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 11:38:50 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/22 15:50:52 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	unsigned	long	abs_integer(int n)
{
	unsigned	long		unsigned_n;

	if (n < 0)
	{
		n = n + 1;
		unsigned_n = -n;
		unsigned_n++;
	}
	else
		unsigned_n = n;
	return (unsigned_n);
}

static	char				*make_zero_str(void)
{
	char					*ret;

	if ((ret = (char *)malloc(sizeof(char) * 2u)) == NULL)
		return (NULL);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

static	size_t				get_alloc_size(int digit_stack_idx, int n)
{
	if (n < 0)
		return (sizeof(char) * (digit_stack_idx + 2));
	else
		return (sizeof(char) * (digit_stack_idx + 1));
}

char						*ft_itoa(int n)
{
	unsigned	long		unsigned_n;
	unsigned	int			digit_stack[9];
	size_t					digit_stack_idx;
	char					*ret;
	size_t					ret_idx;

	if (n == 0)
		return (make_zero_str());
	digit_stack_idx = 0;
	unsigned_n = abs_integer(n) * 10;
	while ((unsigned_n = unsigned_n / 10) != 0)
		digit_stack[digit_stack_idx++] = (unsigned int)(unsigned_n % 10);
	if (!(ret = (char *)malloc(get_alloc_size(digit_stack_idx, n))))
		return (NULL);
	ret_idx = 0;
	if (n < 0)
		ret[ret_idx++] = '-';
	while (digit_stack_idx--)
		ret[ret_idx++] = digit_stack[digit_stack_idx] + '0';
	ret[ret_idx] = '\0';
	return (ret);
}
