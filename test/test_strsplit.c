#include "libft.h"

void	test_strsplit(char const *str, char const *sep)
{
	char	**t;
	count_t	i;

	i = 0;
	t = ft_strsplit(str, sep);

	while(t[i])
	{
		ft_putendl(t[i]);
		i++;
	}
}
