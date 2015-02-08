/**
 * \file gs_avltree_create.c
 * \author Danny Willems
 *
 * \fn t_avltree *gs_avltree_create(void *data, t_avltree *parent, t_avltree
 * *left, t_avltree *right)
 * \brief Create a new avltree element.
 */

#include "libft.h"

t_avltree	*gs_avltree_create(	void *data, t_avltree *parent, t_avltree *left,
								t_avltree *right)
{
	t_avltree	*avltree;

	if ((avltree = (t_avltree *)malloc(sizeof(t_avltree))))
	{
		avltree->data = data;
		avltree->parent = parent;
		avltree->left = left;
		avltree->right = right;
		if (avltree->parent)
			avltree->height = avltree->parent->height + 1;
		else
			avltree->height = (data == NULL ? 0 : 1);
	}
	return (avltree);
}
