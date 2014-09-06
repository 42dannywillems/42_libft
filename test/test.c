#include "libft.h"

void	test_strtrim(char const *s);

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		test_strtrim(argv[1]);
	}

	return (0);
}
