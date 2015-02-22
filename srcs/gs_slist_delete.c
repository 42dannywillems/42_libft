/* 
 * \file gs_slist_delete.c
 * \author Danny Willems
 *
 * \fn t_slist *gs_slist_delete(t_slist *list, void *data, int cmp())
 * \brief Delete all occurences 'data'.
 *
 * Delete all occurences 'data' and return the first element of the list after
 * deleting the node containing 'data'.
 * See gs_slist_delete_first to delete only the first occurence data.
 * !!! Don't free 'data' attribute in the deleted nodes !!!
 */

#include "libft.h"

t_slist	*gs_slist_delete(t_slist *list, void *data, int cmp(void *, void *))
{
	t_slist *tmp;

	if (gs_slist_isempty(list))
		return (NULL);
	else if (cmp(list->data, data) == 0)
	{
		tmp = list->next;
		free(list);
		tmp = gs_slist_delete(tmp, data, cmp);
		return (tmp);
	}
	else
	{
		list->next = gs_slist_delete(list->next, data, cmp);
		return (list);
	}
}
