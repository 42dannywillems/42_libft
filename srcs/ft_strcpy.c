#include "libft.h"

void	ft_strcpy(const char *src, char *dest)
{
	if (*src)
	{
		*dest = *src;
		ft_strcpy(src + 1, dest + 1);
	}
}
