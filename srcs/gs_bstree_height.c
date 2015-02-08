/**
 * \file gs_bstree_height.c
 * \author Danny Willems
 *
 * \fn size_t gs_bstree_height(const t_bstree *bstree)
 * \brief Return the height of bstree.
 *
 * Return 0 if the bstree is empty.
 */

#include "libft.h"

size_t		gs_bstree_height(const t_bstree *bstree)
{
	if (gs_bstree_isempty(bstree) == FALSE)
		return (1 + MATH_MAX(	gs_bstree_height(bstree->left),
								gs_bstree_height(bstree->right)));
	else
		return (0);
}
