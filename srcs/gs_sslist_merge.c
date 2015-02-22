/**
 * \file gs_sslist_merge.c
 * \author Danny Willems
 *
 * \fn t_sslist *gs_sslist_merge(	t_sslist *list1, t_sslist *list2,
									int cmp(void *, void *))
 * \brief Merge two sorted list in the first by inserting each data of the
 * second list in the first, and keep sorted the first list.
 *
 * Insert each element in l1.
 * If l2 is empty, it does nothing.
 * If l1 is empty, it copy all element of l2 and insert it in l1
 * Return the first element of the first list.
 */

#include "libft.h"
#include "gs_sslist.h"

t_sslist	*gs_sslist_merge(	t_sslist *list1, t_sslist *list2,
								int cmp(void *, void *))
{
	while (list2)
	{
		list1 = gs_sslist_insert(list1, list2->data, cmp);
		list2 = list2->next;
	}
	return (list1);
}
