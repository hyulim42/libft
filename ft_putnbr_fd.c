/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:52:37 by hyulim            #+#    #+#             */
/*   Updated: 2020/04/04 07:54:35 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static	char				*make_zero_str(char *dst)
{
	if (dst == NULL)
		return (NULL);
	dst[0] = '0';
	dst[1] = '\0';
	return (dst);
}

static	char				*ft_itoa_custom(int n, char *dst)
{
	unsigned	long		unsigned_n;
	unsigned	int			digit_stack[9];
	size_t					digit_stack_idx;
	size_t					dst_idx;

	if (n == 0)
		return (make_zero_str(dst));
	digit_stack_idx = 0;
	unsigned_n = abs_integer(n) * 10;
	while ((unsigned_n = unsigned_n / 10) != 0)
		digit_stack[digit_stack_idx++] = (unsigned int)(unsigned_n % 10);
	if (dst == NULL)
		return (NULL);
	dst_idx = 0;
	if (n < 0)
		dst[dst_idx++] = '-';
	while (digit_stack_idx--)
		dst[dst_idx++] = digit_stack[digit_stack_idx] + '0';
	dst[dst_idx] = '\0';
	return (dst);
}

void						ft_putnbr_fd(int n, int fd)
{
	char					numb_str[12];
	char					*print_str;

	if (fd == -1)
		return ;
	if ((print_str = ft_itoa_custom(n, numb_str)) == NULL)
		return ;
	ft_putstr_fd(numb_str, fd);
}
