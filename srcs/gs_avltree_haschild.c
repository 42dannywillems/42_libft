/**
 * \file gs_avltree_haschild.c
 * \author Danny Willems
 *
 * \fn bool_t gs_avltree_haschild(t_avltree *avltree, int child)
 * \brief Return true if avltree has a left child (resp. right) if child is set
 * to left (resp. right).
*/

#include "libft.h"

bool_t gs_avltree_haschild(const t_avltree *avltree, int child)
{
	if (avltree)
	{
		if (child == LEFT)
			return (gs_avltree_isempty(avltree->left) == FALSE);
		else if (child == RIGHT)
			return (gs_avltree_isempty(avltree->right) == FALSE);
	}
	return (FALSE);
}
