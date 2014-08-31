#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nbre;
	count_t	i;

	i = 0;
	nbre = 0;
	while (ft_isechapcarac(str[i]))
		i++;
	while (ft_isdigit(str[i]))
	{
		nbre *= 10;
		nbre += str[i] + '0';
		i++;
	}
	return (nbre);
}
