/**
 * \file gs_sslist_insert.c
 * \author Danny Willems
 *
 * \fn t_sslist *gs_sslist_insert(	t_sslist *list, void *data,
									int cmp(void *, void *))
 * \brief Insert data in the sorted linked list, keeping the list sorted.
 *
 * If the list is empty, it creates a new list or modify the 'data' attribute.
 * If data is in the list, it doesn't insert it !
 * Return the first element of the list.
 */

#include "libft.h"
#include "gs_sslist.h"

static t_sslist		*gs_sslist_insert_empty(t_sslist *list, void *data)
{
	if (list)
		list->data = data;
	else
		list = gs_sslist_create(data, NULL);
	return (list);
}

static t_sslist		*gs_sslist_insert_in(	t_sslist *list, void *data,
											int cmp(void *, void *))
{
	t_sslist	*previous;
	t_sslist	*ret;
	int			result;

	ret = list;
	previous = list;
	while (list)
	{
		result = cmp(list->data, data);
		if (result < 0)
		{
			previous = list;
			list = list->next;
		}
		else if (result == 0)
			return (ret);
		else
		{
			previous->next = gs_sslist_create(data, list);
			return (ret);
		}
	}
	previous->next = gs_sslist_create(data, list);
	return (ret);
}
t_sslist	*gs_sslist_insert(	t_sslist *list, void *data,
								int cmp(void *, void *))
{

	if (gs_sslist_isempty(list))
		return (gs_sslist_insert_empty(list, data));
	else if (cmp(list->data, data) > 0)
		return (gs_sslist_create(data, list));
	else
		return (gs_sslist_insert_in(list, data, cmp));
}
