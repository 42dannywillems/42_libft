#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(s1));
	dest = ft_strcpy(dest, s1);
	return (dest);
}

