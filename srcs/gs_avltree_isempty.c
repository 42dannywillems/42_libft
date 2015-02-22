/**
 * \file gs_avltree_isempty.c
 * \author Danny Willems
 *
 * \fn bool_t gs_avltree_isempty(const t_avltree *avltree)
 * \brief Return true if the avltree is empty
 *
 * A avltree is empty if its data field is NULL or if avltree is NULL.
 */

#include "libft.h"

bool_t		gs_avltree_isempty(const t_avltree *avltree)
{
	return (!(avltree && avltree->data));
}
