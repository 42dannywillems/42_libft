#include "gs_slist.h"
#include "gs_prototypes.h"

char	**gs_slist_toarray(t_slist **begin_list, size_t size)
{
	char		**array_str;
	count_t		i;

	array_str = (char **)malloc(sizeof(char *) * (size + 1));
	i = 0;
	if (array_str)
	{
		while (*begin_list)
		{
			array_str[i] = (char *)(gs_slist_del(begin_list));
			i++;
		}
		array_str[size] = "\0";
	}
	return (array_str);
}
