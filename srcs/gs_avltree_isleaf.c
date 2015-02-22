/**
 * \file gs_avltree_isleaf.c
 * \author Danny Willems
 *
 * \fn bool_t gs_avltree_isleaf(const t_avltree *avltree)
 * \brief Return true if the avltree is null or if it's a leaf
 */

#include "libft.h"

bool_t		gs_avltree_isleaf(const t_avltree *avltree)
{
	if (avltree)
		return (avltree->left == NULL && avltree->right == NULL);
	return (TRUE);
}
