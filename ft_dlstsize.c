
#include "libft.h"

ssize_t				ft_dlst_size(t_dlist *lst)
{
	t_dlist			*cur;
	ssize_t			size;

	if (lst == NULL)
		return (0);
	return (lst->size);
}
