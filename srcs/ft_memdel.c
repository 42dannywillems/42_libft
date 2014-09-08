#include "libft.h"

void	ft_memdel(void **a)
{
	free(*a);
	*a = NULL;
}
