#include "libft.h"

void	ft_putrepeat(char const *c, size_t n)
{
	count_t i;

	i = 0;
	while (i++ < n)
		ft_putstr(c);
}
