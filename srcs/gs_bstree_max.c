/**
 * \file gs_bstree_max.c
 * \author Danny Willems
 *
 * \fn t_bstree *gs_bstree_max(t_bstree *bstree)
 * \brief Return the node containing the maximum data of the bstree.
 */

#include "libft.h"

t_bstree	*gs_bstree_max(t_bstree *bstree)
{
	if (gs_bstree_haschild(bstree, RIGHT))
		return (gs_bstree_max(bstree->right));
	return (bstree);
}
