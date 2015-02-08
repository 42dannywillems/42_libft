/**
 * \file gs_bstree_insert.c
 * \author Danny Willems
 * 
 * \fn t_bstree *gs_bstree_insert(	t_bstree *bstree, void *data,
									int cmp(void *, void *))
 * \brief Insert data in bstree.
 */

#include "libft.h"

t_bstree	*gs_bstree_insert(	t_bstree **bstree, void *data,
								int cmp(void *, void *))
{
	t_bstree *tmp;

	if (!gs_bstree_isempty(*bstree))
	{
		if (cmp((*bstree)->data, data) < 0)
		{
			if (gs_bstree_haschild(*bstree, RIGHT))
				return (gs_bstree_insert(&((*bstree)->right), data, cmp));
			else if ((tmp = gs_bstree_create(data, *bstree, NULL, NULL)))
			{
				(*bstree)->right = tmp;
				return (tmp);
			}
			return (NULL);
		}
		else if (cmp((*bstree)->data, data) > 0)
		{
			if (gs_bstree_haschild(*bstree, LEFT))
				return (gs_bstree_insert(&((*bstree)->left), data, cmp));
			else if ((tmp = gs_bstree_create(data, *bstree, NULL, NULL)))
			{
				(*bstree)->left = tmp;
				return (tmp);
			}
			return (NULL);
		}
		return (*bstree);
	}
	if (*bstree)
		(*bstree)->data = data;
	else
		*bstree = gs_bstree_create(data, NULL, NULL, NULL);
	return (*bstree);
}
