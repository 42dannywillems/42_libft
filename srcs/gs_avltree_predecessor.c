/**
 * \file gs_avltree_predecessor.c
 * \author Danny Willems
 *
 * \fn t_avltree	*gs_avltree_predecessor(	t_avltree *avltree, void *data,
										int cmp(void *, void *))
	\brief Return the predecessor of data in avltree.

	The predecessor is defined as the right-most value in the left subtree.
 */

#include "libft.h"

t_avltree	*gs_avltree_predecessor(t_avltree *avltree, void *data,
									int cmp(void *, void *))
{
	t_avltree *tmp;
	
	if ((tmp = gs_avltree_find(avltree, data, cmp)))
		return (gs_avltree_max(tmp->left));
	return (NULL);

}
