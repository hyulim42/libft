NAME		= libft.a

FILENAME	= ft_memset.c \
			  ft_bzero.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memccpy.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_calloc.c \
			  ft_strlen.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_atoi.c \
			  ft_tolower.c \
			  ft_toupper.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strncmp.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_strdup.c \
			  ft_strndup.c \
			  ft_strnstr.c \
			  ft_itoa.c \
			  ft_split.c \
			  ft_strjoin.c \
			  ft_substr.c \
			  ft_strtrim.c \
			  ft_strmapi.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \
			  ft_lstnew.c \
			  ft_lstadd_front.c \
			  ft_lstsize.c \
			  ft_lstlast.c \
			  ft_lstadd_back.c \
			  ft_lstdelone.c \
			  ft_lstclear.c \
			  ft_lstiter.c \
			  ft_lstmap.c \
			  ft_dlst_init.c \
			  ft_dnode_new.c \
			  ft_dlst_insert.c \
			  ft_dlst_add_front.c \
			  ft_dlst_add_back.c \
			  ft_dlst_size.c \
			  ft_dlst_first.c \
			  ft_dlst_last.c \
			  ft_dlst_del_one.c \
			  ft_dlst_del_first.c \
			  ft_dlst_del_last.c \
			  ft_dlst_clear.c \
			  ft_dlst_iter.c

OBJS 		= $(FILENAME:.c=.o)

CC = clang
CFLAGS = -Wall -Werror -Wextra
CFLAGS += -I libft.h

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

#$(NAME):
#	$(CC) $(CFLAGS) -c $(FILENAME)
#	ar rc $(NAME) $(OBJS)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

# gcc -Wall -Werror -Wextra main.c libft.a
