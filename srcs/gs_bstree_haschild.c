/**
 * \file gs_bstree_haschild.c
 * \author Danny Willems
 *
 * \fn bool_t gs_bstree_haschild(t_bstree *bstree, int child)
 * \brief Return true if bstree has a left child (resp. right) if child is set
 * to left (resp. right).
*/

#include "libft.h"

bool_t gs_bstree_haschild(const t_bstree *bstree, int child)
{
	if (bstree)
	{
		if (child == LEFT)
			return (gs_bstree_isempty(bstree->left) == FALSE);
		else if (child == RIGHT)
			return (gs_bstree_isempty(bstree->right) == FALSE);
		else
			return (FALSE);
	}
	return (FALSE);
}
