/**
 * \file gs_avltree_balanced.c
 * \author Danny Willems
 *
 * \fn int gs_avltree_balanced(t_avltree *avltree)
 * \brief Return the balanced of the avltree sent as parameters
*/

#include "gs_avltree.h"

int		gs_avltree_balanced(t_avltree *avltree)
{
	if (gs_avltree_isempty(avltree))
		return (0);
	else
		return (gs_avltree_height(avltree->right) -
				gs_avltree_height(avltree->left));
}
