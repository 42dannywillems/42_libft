#include "libft.h"

int		ft_isalpha(char c)
{
	return (ft_isuppercase(c) || ft_islowercase(c));
}
