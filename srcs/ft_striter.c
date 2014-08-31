#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	count_t i;

	i = 0;
	while (s[i])
	{
		(*f)(s + i);
		i++;
	}
}
