/**
 * \file gs_avltree_min.c
 * \author Danny Willems
 *
 * \fn t_avltree *gs_avltree_min(t_avltree *avltree)
 * \brief Return the node containing the minimum data of the avltree.
 */

#include "libft.h"

t_avltree	*gs_avltree_min(t_avltree *avltree)
{
	if (gs_avltree_haschild(avltree, LEFT))
		return (gs_avltree_min(avltree->left));
	return (avltree);
}
