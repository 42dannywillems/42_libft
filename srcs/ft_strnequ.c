#include "libft.h"

bool_t		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (*s2)
		return (ft_strncmp(s1, s2, n) == 0);
	else // Empty string
		return (TRUE);
}
