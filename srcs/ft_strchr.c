#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	return (s);
}
