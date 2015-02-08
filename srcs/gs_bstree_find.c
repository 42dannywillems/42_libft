/**
 * \file gs_bstree_find.c
 * \author Danny Willems
 *
 * \fn t_bstree *gs_bstree_find(t_bstree *bstree, void *data,
								int cmp(void *, void *))
 * \brief Find data in bstree. If data is not present in bstree, return NULL.
 */

#include "libft.h"

t_bstree	*gs_bstree_find(t_bstree *bstree, void *data,
							int cmp(void *, void *))
{
	if (bstree)
	{
		if (cmp(bstree->data, data) == 0)
			return (bstree);
		else if (cmp(bstree->data, data) < 0)
			return (gs_bstree_find(bstree->right, data, cmp));
		else
			return (gs_bstree_find(bstree->left, data, cmp));
	}
	return (NULL);
}
