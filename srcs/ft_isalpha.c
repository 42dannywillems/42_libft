#include "libft.h"

int		ft_isalpha(int c)
{
	return (ft_isuppercase(c) || ft_islowercase(c));
}
