#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	count_t	i;
	
	ret = NULL;
	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			ret = (char *)s;
		i++;
	}
	return (ret);
}
