/**
 * \file gs_avltree_create.c
 * \author Danny Willems
 *
 * \fn t_avltree *gs_avltree_create(void *data, t_avltree *parent, t_avltree
 * *left, t_avltree *right)
 * \brief Create a new avltree element.
 */

#include "libft.h"

t_avltree	*gs_avltree_create(void *data, t_avltree *left, t_avltree *right)
{
	t_avltree	*avltree;
	int			l_height;
	int			r_height;

	if ((avltree = (t_avltree *)malloc(sizeof(t_avltree))))
	{
		avltree->data = data;
		avltree->left = left;
		avltree->right = right;
		if (left == NULL && right == NULL)
			avltree->height = (data == NULL ? 0 : 1);
		else
		{
			l_height = gs_avltree_height(avltree->left);
			r_height = gs_avltree_height(avltree->right);
			avltree->height = 1 + MATH_MAX(l_height, r_height);
		}
	}
	return (avltree);
}
