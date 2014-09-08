#include "libft.h"

void	test_strtrim(char const *s);
void	test_strsplit(char const *str, char const *sep);
void	test_array_join(const char **s, const char *join);

int main(int argc, char **argv)
{
	char	**s;
	int		i;

	if (argc > 1)
	{
		s = (char **)malloc(sizeof(char *) * (argc + 1));
		for(i = 0;i < argc;i++)
			s[i] = ft_strdup(argv[i]);
		s[argc] = "\0";

		test_array_join((const char **) s, " ");
		
		//test_strtrim(argv[1]);
		//test_strsplit(argv[2], argv[3]);
	}

	return (0);
}
