/**
 * \file gs_bstree_isempty.c
 * \author Danny Willems
 *
 * \fn bool_t gs_bstree_isempty(const t_bstree *bstree)
 * \brief Return true if the bstree is empty
 *
 * A bstree is empty if its data field is NULL or if bstree is NULL.
 */

#include "libft.h"

bool_t		gs_bstree_isempty(const t_bstree *bstree)
{
	return (!(bstree && bstree->data));
}
