/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 19:38:08 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 04:42:41 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	char		*ft_strcdup(char const *s, char c)
{
	size_t			len;
	char			*ret;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	if (len == 0)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_memmove(ret, s, len);
	if (ret == NULL)
		return (NULL);
	ret[len] = '\0';
	return (ret);
}

static	void		*ft_2d_free(char **dst)
{
	size_t			idx;

	if (dst == NULL)
		return (NULL);
	idx = 0;
	while (dst[idx])
	{
		free(dst[idx]);
		dst[idx] = NULL;
		idx++;
	}
	dst = NULL;
	return ((void*)dst);
}

static	char		**ft_alloc_2d_array(char const *s, char c)
{
	size_t			front_idx;
	size_t			back_idx;
	size_t			len;
	int				continue_switch;

	front_idx = 0;
	while (s[front_idx] != '\0' && s[front_idx] == c)
		front_idx++;
	back_idx = ft_strlen(s);
	while (back_idx != front_idx && s[back_idx - 1] == c)
		back_idx--;
	len = 0;
	while (front_idx < back_idx)
	{
		continue_switch = 0;
		while (front_idx < back_idx && s[front_idx] != c)
		{
			if (continue_switch++ == 0)
				len++;
			front_idx++;
		}
		while (front_idx < back_idx && s[front_idx] == c)
			front_idx++;
	}
	return ((char **)ft_calloc(sizeof(char*) * (len + 1), 1));
}

static	char		**ft_fill_2d_array(char **dst, char const *s, char c)
{
	size_t			front_idx;
	size_t			back_idx;
	size_t			line_idx;

	front_idx = 0;
	while (s[front_idx] != '\0' && s[front_idx] == c)
		front_idx++;
	back_idx = ft_strlen(s);
	while (back_idx != front_idx && s[back_idx - 1] == c)
		back_idx--;
	line_idx = 0;
	while (front_idx < back_idx)
	{
		if ((dst[line_idx++] = ft_strcdup(&s[front_idx], c)) == NULL)
			return ((char **)ft_2d_free(dst));
		while (front_idx < back_idx && s[front_idx] != c)
			front_idx++;
		while (front_idx < back_idx && s[front_idx] == c)
			front_idx++;
	}
	return (dst);
}

char				**ft_split(char const *s, char c)
{
	char			**ret;
	char			**backup_ret;

	if (s == NULL || *s == '\0')
		return ((char **)ft_calloc(sizeof(char*) * 1, 1));
	ret = ft_alloc_2d_array(s, c);
	if (ret == NULL)
		return (NULL);
	backup_ret = ret;
	ret = ft_fill_2d_array(ret, s, c);
	if (ret == NULL || ret != backup_ret)
	{
		ft_2d_free(backup_ret);
		ret = NULL;
		backup_ret = NULL;
	}
	return (ret);
}
