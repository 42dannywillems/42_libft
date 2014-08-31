#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *s;

	s = malloc(size);
	if (s)
		s = ft_memset(s, 0, size);
	return (s);
}
