/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:22:46 by hyulim            #+#    #+#             */
/*   Updated: 2020/10/26 05:08:19 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void				*ft_free(void *target);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *restrict dst, const void *restrict src
		, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memccpy(void *restrict dst, const void *restrict src
		, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_calloc(size_t count, size_t size);
size_t				ft_strlen(const char *s);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_atoi(const char *str);
unsigned	int		ft_uatoi(const char *str);
char				*ft_uatoi_reel(const char *str);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcpy(char *restrict dst, const char *restrict src
		, size_t dstsize);
size_t				ft_strlcat(char *restrict dst, const char *restrict src
		, size_t dstsize);
char				*ft_strdup(const char *s1);
char				*ft_strndup(const char *s1, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle
		, size_t len);
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new_node);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new_node);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *)
		, void (*del)(void *));


typedef	struct		s_dnode
{
	void			*content;
	struct s_dnode	*prev;
	struct s_dnode	*next;
}					t_dnode;

typedef	struct		s_dlist
{
	ssize_t			l_size;
	t_dnode			*head;
	t_dnode			*tail;
	t_dnode			dummy_head;
	t_dnode			dummy_tail;
	t_dnode			*(*alloc)(void *);
	ssize_t			(*size)(struct s_dlist *);
	t_dnode			*(*insert)(struct s_dlist *, t_dnode *, t_dnode *);
	t_dnode			*(*push_back)(struct s_dlist *, void *);
	t_dnode			*(*push_front)(struct s_dlist *, void *);
	void			*(*front)(struct s_dlist *);
	void			*(*back)(struct s_dlist *);
	void			(*erase)(struct s_dlist *, t_dnode *, void (*)(void *));
	void			(*pop_front)(struct s_dlist *, void (*)(void *));
	void			(*pop_back)(struct s_dlist *, void (*)(void *));
	void			(*clear)(struct s_dlist *, void (*)(void *));
	void			(*iter)(struct s_dlist *, void (*)(void *));
}					t_dlist;

void				ft_dlst_init(t_dlist *lst);
t_dnode				*ft_dnode_new(void *content);
t_dnode				*ft_dlst_insert(t_dlist *lst, t_dnode *next, void *cont);
t_dnode				*ft_dlst_add_front(t_dlist *lst, void *cont);
t_dnode				*ft_dlst_add_back(t_dlist *lst, void *cont);
ssize_t				ft_dlst_size(t_dlist *lst);
void				*ft_dlst_first(t_dlist *lst);
void				*ft_dlst_last(t_dlist *lst);
void				ft_dlst_del_one(t_dlist *lst, t_dnode *node,\
		void (*del)(void *));
void				ft_dlst_del_first(t_dlist *lst, void (*del)(void *));
void				ft_dlst_del_last(t_dlist *lst, void (*del)(void *));
void				ft_dlst_clear(t_dlist *lst, void (*del)(void *));
void				ft_dlst_iter(t_dlist *lst, void (*f)(void *));

#endif
