/**
 * t_slist	*gs_slist_merge(t_slist *list1, t_slist *list2)
 *
 * Merge list1 with list2 by adding list2 to the end of list1. It modifies
 * directly list1, and return a pointer to the first node of list1.
 * list1 must be not empty.
 *
 * DO NOT USE.
 */

#include "gs_slist.h"

t_slist	*gs_slist_merge(t_slist *list1, t_slist *list2)
{
	t_slist *ret;

	if (list1 && !gs_slist_isempty(list1))
	{
		ret = list1;
		while (list1->next)
			list1 = list1->next;
		list1->next = list2;
	}
	else
		ret = list2;
	return (ret);
}
