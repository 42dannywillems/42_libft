#include "libft.h"
#include "gs_slist.h"

t_slist *gs_slist_pop(t_slist **list)
{
	t_slist *ret;

	if (gs_slist_isempty(*list))
		return (NULL);
	ret = *list;
	*list = (*list)->next;
	return (ret);
}
