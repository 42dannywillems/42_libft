/**
 * DO NOT USE. NOT TESTED AND ALGORITHM NOT CHECKED.
 */

#include "libft.h"

t_bstree	*gs_bstree_create(	void *data, t_bstree *parent, t_bstree *left,
								t_bstree *right)
{
	t_bstree	*bstree;

	if ((bstree = (t_bstree *)malloc(sizeof(t_bstree))))
	{
		bstree->data = data;
		bstree->parent = parent;
		bstree->left = left;
		bstree->right = right;
	}
	return (bstree);
}
