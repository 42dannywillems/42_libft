#include "libft.h"

void	test_strstr(bool_t verbose)
{
	char *tmp;
	char *output;
	
	char *a;
	char *b;
	
	a = "Hello World";
	b = " ";
	output = " World";
	tmp = ft_strstr(a, b);
	ft_putstr("Test 1 : ");
	ft_putnbr(ft_strequ(tmp, output));
	if (verbose)
	{
		ft_putendl("");
		ft_putstr("output attendu : ");
		ft_putendl(output);
		ft_putstr("output recu    : ");
		ft_putendl(tmp);
	}
	ft_putendl("");

	a = "<html <h1> test </h1> </html>";
	b = "<h1>";
	tmp = ft_strstr(a, b);
	output = "<h1> test </h1> </html>";
	ft_putstr("Test 2 : ");
	ft_putnbr(ft_strequ(tmp, output));
	if (verbose)
	{
		ft_putendl("");
		ft_putstr("output attendu : ");
		ft_putendl(output);
		ft_putstr("output recu    : ");
		ft_putendl(tmp);
	}
	ft_putendl("");

	a = "hello";
	b = "";
	tmp = ft_strstr(a, b);
	output = "hello";
	ft_putstr("Test 3 : ");
	ft_putnbr(ft_strequ(tmp, output));
	if (verbose)
	{
		ft_putendl("");
		ft_putstr("output attendu : ");
		ft_putendl(output);
		ft_putstr("output recu    : ");
		ft_putendl(tmp);
	}
	ft_putendl("");
}
