#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*c_dest;
	char	*c_src;
	size_t	i;

	c_dest	= (char *)dest;
	c_src	= (char *)src;
	i		= 0;
	while (i < n && c_src[i] != (char)c)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
		return (c_dest + i);
}
