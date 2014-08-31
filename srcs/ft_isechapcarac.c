#include "libft.h"

int		ft_isechapcarac(int c)
{
	return (c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == '\r');
}
