#include "libft.h"

#define TEST_ATOI(x)	if (atoi((x)) == ft_atoi((x))) \
						{\
							ft_putendl("OK");\
						}\
						else\
						{\
							ft_putstr("ERROR ");\
							ft_putendl((x));\
							ft_putstr("\tOutput : ");\
							ft_putnbr(ft_atoi(((x))));\
							ft_putendl("");\
							ft_putstr("\tRight : ");\
							ft_putnbr(atoi(((x))));\
							ft_putendl("");\
						}
void test_atoi()
{
	ft_putendl("Test atoi");
	TEST_ATOI("5");
	TEST_ATOI("-54");
	TEST_ATOI("\t  \t \n \r 56");
	TEST_ATOI("- 5464");
	TEST_ATOI("        -452");
	TEST_ATOI("+ 54");
	TEST_ATOI("+-42");
	TEST_ATOI("9223372036854775809");
}
