/**
 * \file gs_bstree_create.c
 * \author Danny Willems
 *
 * \fn t_bstree *gs_bstree_create(void *data, t_bstree *left, t_bstree *right)
 * \brief Create a new bstree element.
 */

#include "libft.h"

t_bstree	*gs_bstree_create(void *data, t_bstree *left, t_bstree *right)
{
	t_bstree	*bstree;

	if ((bstree = (t_bstree *)malloc(sizeof(t_bstree))))
	{
		bstree->data = data;
		bstree->left = left;
		bstree->right = right;
	}
	return (bstree);
}
