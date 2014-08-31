#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	char *c_s;
	char c_c;

	c_s = (char *)s;
	c_c = (char)c;
	while (n-- > 0)
	{
		*c_s = (char)c_c;
		c_s++;
	}
}
