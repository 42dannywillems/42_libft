#include "libft.h"
#include "gs_slist.h"

t_slist	*gs_slist_delete_nth(t_slist **list, pos_t i)
{
	t_slist *ret;
	t_slist *previous;
	t_slist *data;

	previous = NULL;
	data = NULL;
	ret = *list;
	if (i == 0)
		return (gs_slist_pop(list));
	while(i > 0 && *list)
	{
		previous = *list;
		*list = (*list)->next;
		i--;
	}
	if (i == 0)
	{
		data = *list;
		if (*list)
			previous->next = (*list)->next;
		else
			previous->next = NULL;
	}
	*list = ret;
	return (data);
}
