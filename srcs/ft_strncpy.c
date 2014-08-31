#include "libft.h"

void	ft_strncpy(const char *src, char *dest, size_t n)
{
	if (*src && n > 0)
	{
		*dest = *src;
		ft_strncpy(src + 1, dest + 1, n - 1);
	}
}
