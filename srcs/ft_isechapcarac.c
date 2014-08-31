#include "libft.h"

int		ft_isechapcarac(char c)
{
	return (c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == '\r');
}
