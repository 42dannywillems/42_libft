#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s)
	{
		if (*s == c)
			return ((char *)s);
		else
			return (ft_strchr(s + 1, c));
	}
	else
		return (NULL);
}
