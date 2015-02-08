/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 * bstree must not be NULL !!!
 */

#include "libft.h"

bool_t		gs_bstree_isleaf(const t_bstree *bstree)
{
	if (bstree)
		return (bstree->left == NULL && bstree->right == NULL);
	return (TRUE);
}
