#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *c_s;

	c_s = (char *)s;
	while (n-- > 0)
	{
		*c_s = '\0';
		c_s++;
	}
}
