#include "libft.h"

void	test_itoa()
{
	ft_putstr("Doit afficher 9 ---> ");
	ft_putendl(ft_itoa(9));
	ft_putstr("Doit afficher 15 ---> ");
	ft_putendl(ft_itoa(15));
	ft_putstr("Doit afficher -9 ---> ");
	ft_putendl(ft_itoa(-9));
	ft_putstr("Doit afficher -15 ---> ");
	ft_putendl(ft_itoa(-15));
	ft_putstr("Doit afficher 209 450 ---> ");
	ft_putendl(ft_itoa(209450));
	ft_putstr("Doit afficher -35 930 ---> ");
	ft_putendl(ft_itoa(-35930));
	ft_putstr("Doit afficher 0 ---> ");
	ft_putendl(ft_itoa(0));
}

