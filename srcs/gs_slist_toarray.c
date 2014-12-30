#include "gs_slist.h"

char	**gs_slist_toarray(t_slist *list, bool_t delete_list)
{
	t_slist		*tmp;
	char		**array_str;
	count_t		i;

	array_str = (char **)malloc(sizeof(char *) * (gs_slist_size(list) + 1));
	i = 0;
	if (array_str)
	{
		while (tmp)
		{
			array_str[i] = (char *)(tmp->data);
			i++;
			tmp = tmp->next;
		}
		array_str[i] = "\0";
	}
	if (delete_list)
		gs_slist_clear(&list);
	return (array_str);

}
