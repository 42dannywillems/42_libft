#include "libft.h"

size_t		ft_strlen(const char *str)
{
	if (*str)
		return (1 + ft_strlen(str + 1));
	else
		return (0);
}
