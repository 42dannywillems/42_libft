/**
 * \file gs_bstree_min.c
 * \author Danny Willems
 *
 * \fn t_bstree *gs_bstree_min(t_bstree *bstree)
 * \brief Return the node containing the minimum data of the bstree.
 */

#include "libft.h"

t_bstree	*gs_bstree_min(t_bstree *bstree)
{
	if (gs_bstree_haschild(bstree, LEFT))
		return (gs_bstree_min(bstree->left));
	return (bstree);
}
