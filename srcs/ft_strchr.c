#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (c == 0) // null bytes of s is considered
		return (s);
	return (*s ? s : NULL); // *s == 0 if not found --> NULL
}
