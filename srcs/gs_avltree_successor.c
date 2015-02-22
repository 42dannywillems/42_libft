/**
 * \file gs_avltree_successor.c
 * \author Danny Willems
 *
 * \fn t_avltree	*gs_avltree_successor(	t_avltree *avltree, void *data,
										int cmp(void *, void *))
	\brief Return the successor of data in avltree.

	The successor is defined as the left-most value in the right subtree.
 */

#include "libft.h"

t_avltree	*gs_avltree_successor(	t_avltree *avltree, void *data,
									int cmp(void *, void *))
{
	t_avltree *tmp;

	if ((tmp = gs_avltree_find(avltree, data, cmp)))
		return (gs_avltree_min(tmp->right));
	return (NULL);
}
