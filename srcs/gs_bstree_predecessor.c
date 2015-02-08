/**
 * \file gs_bstree_predecessor.c
 * \author Danny Willems
 *
 * \fn t_bstree	*gs_bstree_predecessor(	t_bstree *bstree, void *data,
										int cmp(void *, void *))
	\brief Return the predecessor of data in bstree.

	The predecessor is defined as the right-most value in the left subtree.
 */

#include "libft.h"

t_bstree	*gs_bstree_predecessor(	t_bstree *bstree, void *data,
									int cmp(void *, void *))
{
	t_bstree *tmp;
	
	if ((tmp = gs_bstree_find(bstree, data, cmp)))
		return (gs_bstree_max(tmp->left));
	return (NULL);

}
