/**
 * \file gs_avltree_max.c
 * \author Danny Willems
 *
 * \fn t_avltree *gs_avltree_max(t_avltree *avltree)
 * \brief Return the node containing the maximum data of the avltree.
 */

#include "libft.h"

t_avltree	*gs_avltree_max(t_avltree *avltree)
{
	if (gs_avltree_haschild(avltree, RIGHT))
		return (gs_avltree_max(avltree->right));
	return (avltree);
}
