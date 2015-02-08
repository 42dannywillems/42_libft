/**
 * \file gs_avltree_height.c
 * \author Danny Willems
 *
 * \fn size_t gs_avltree_height(const t_avltree *avltree)
 * \brief Return the height of avltree.
 *
 * Return 0 if the avltree is empty.
 */

#include "libft.h"

size_t		gs_avltree_height(const t_avltree *avltree)
{
	if (avltree)
		return (avltree->height);
	return (0);
}
