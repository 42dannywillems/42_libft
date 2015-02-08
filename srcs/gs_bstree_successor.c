/**
 * \file gs_bstree_successor.c
 * \author Danny Willems
 *
 * \fn t_bstree	*gs_bstree_successor(	t_bstree *bstree, void *data,
										int cmp(void *, void *))
	\brief Return the successor of data in bstree.

	The successor is defined as the left-most value in the right subtree.
 */

#include "libft.h"

t_bstree	*gs_bstree_successor(	t_bstree *bstree, void *data,
									int cmp(void *, void *))
{
	t_bstree *tmp;

	if ((tmp = gs_bstree_find(bstree, data, cmp)))
		return (gs_bstree_min(tmp->right));
	return (NULL);
}
