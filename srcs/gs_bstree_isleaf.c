/**
 * \file gs_bstree_isleaf.c
 * \author Danny Willems
 *
 * \fn bool_t gs_bstree_isleaf(const t_bstree *bstree)
 * \brief Return true if the bstree is null or if it's a leaf
 */

#include "libft.h"

bool_t		gs_bstree_isleaf(const t_bstree *bstree)
{
	if (bstree)
		return (bstree->left == NULL && bstree->right == NULL);
	return (TRUE);
}
