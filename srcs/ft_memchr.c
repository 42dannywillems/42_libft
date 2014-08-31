#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	unsigned char	uc_c;

	uc_s = (unsigned char *)s;
	uc_c = (unsigned char)c;

	while (n-- > 0)
	{
		if (*uc_s == uc_c)
			return (uc_s);
		uc_s++;
	}
	return (NULL);
}
