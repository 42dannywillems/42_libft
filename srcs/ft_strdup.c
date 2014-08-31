#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(s1));
	ft_strcpy(s1, dest);
	return (dest);
}

