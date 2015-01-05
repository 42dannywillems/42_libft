#include "libft.h"

t_bstree	*gs_bstree_insert(	t_bstree *bstree, void *data,
								int cmp(void *, void *))
{
	t_bstree	*tmp;

	if (bstree)
	{
		if (cmp(bstree->data, data) < 0 && (tmp = gs_bstree_create(data)))
		{
			if (bstree->right)
				return (gs_bstree_insert(bstree->right, data, cmp));
			bstree->right = tmp;
			tmp->parent = bstree;
		}
		else if (cmp(bstree->data, data) > 0 && (tmp = gs_bstree_create(data)))
		{
			if (bstree->left)
				return (gs_bstree_insert(bstree->left, data, cmp));
			bstree->left = tmp;
			tmp->parent = bstree;
		}
		else if (cmp(bstree->data, data) == 0)
			return (bstree);
		else
			return (tmp);
	}
	bstree = gs_bstree_create(data);
	return (bstree);
}
