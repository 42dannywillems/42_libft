#include "libft.h"

char	**ft_strsplit(const char *str, int c)
{
	char *t;

	if ((t = ft_strnew(1)))
	{
		t[0] = (char)c;
		return (ft_strsplit_str(str, t));
	}
	return (NULL);
}
