#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	count_t i;

	i = 1;
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
