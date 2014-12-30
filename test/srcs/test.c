#include "libft.h"

void	test_strtrim(char const *s);
void	test_strsplit(char const *str, char const *sep);
void	test_array_join(const char **s, const char *join);
void	test_itoa();
void	test_strstr(bool_t verbose);
void	test_slist_create();
void	test_slist_isempty();
void	test_slist_print();
void	test_slist_push_front();
void	test_slist_size();
void	test_slist_clear();
void	test_slist_reverse();
void	test_stack();

int main(void)
{
	//test_itoa();
	//test_strstr(TRUE);
	test_slist_create();
	test_slist_isempty();
	test_slist_print();
	test_slist_push_front();
	test_slist_size();
	test_slist_clear();
	test_slist_reverse();
	test_stack();
	return (0);
}
