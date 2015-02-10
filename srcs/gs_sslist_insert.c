/**
 * \file gs_sslist_insert.c
 * \author Danny Willems
 *
 * \fn t_sslist *gs_sslist_insert(	t_sslist *list, void *data,
									int cmp(void *, void *))
 * \brief Insert data in the sorted linked list, keeping the list sorted.
 *
 * TO TEST !
 */

#include "libft.h"
#include "gs_sslist.h"

t_sslist	*gs_sslist_insert(	t_sslist *list, void *data,
								int cmp(void *, void *))
{
	t_sslist *previous;
	t_sslist *ret;

	ret = list;
	previous = NULL;
	if (gs_sslist_isempty(list))
	{
		if (list)
			list->data = data;
		else
			list = gs_sslist_create(data, NULL);
		return (ret);
	}
	while (list->next)
	{
		if (cmp(list->data, data) < 0)
		{
			previous = list;
			list = list->next;
		}
		else
			previous->next = gs_sslist_create(data, list);
	}
	if (gs_sslist_isempty(list->next))
		list->next = gs_sslist_create(data, NULL);
	return (ret);
}
