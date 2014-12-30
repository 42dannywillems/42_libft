#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nbre;
	count_t	i;
	int		signe;

	i = 0;
	nbre = 0;
	signe = 1;
	while (ft_isechapcarac(str[i]))
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		nbre *= 10;
		nbre += signe * (str[i] - '0');
		i++;
	}
	return (nbre);
}
