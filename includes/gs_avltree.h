#ifndef GS_AVLTREE_H
# define GS_AVLTREE_H

#include "libft.h"

#define LEFT 0
#define RIGHT 1

typedef struct	s_avltree 
{
				struct s_avltree	*left;
				struct s_avltree	*right;
				void				*data;
				int					height;
}				t_avltree;
/* ----------  end of struct avltree  ---------- */

t_avltree	*gs_avltree_create(void *data, t_avltree *left, t_avltree *right);

bool_t		gs_avltree_isempty(const t_avltree *avltree);
bool_t		gs_bstree_isleaf(const t_bstree *bstree);
bool_t		gs_avltree_haschild(const t_avltree *avltree, int child);

size_t		gs_avltree_height(const t_avltree *avltree);
int			gs_avltree_balanced(t_avltree *avltree);

t_avltree	*gs_avltree_min(t_avltree *avltree);
t_avltree	*gs_avltree_max(t_avltree *avltree);
t_avltree	*gs_avltree_successor(	t_avltree *avltree, void *data,
									int cmp(void *, void *));
t_avltree	*gs_avltree_predecessor(	t_avltree *avltree, void *data,
									int cmp(void *, void *));
t_avltree	*gs_avltree_find(	t_avltree *avltree, void *data,
								int cmp(void *, void *));
//t_avltree	*gs_avltree_insert(	t_avltree *avltree, void *data,
//								int cmp(void *, void *));
//t_avltree	*gs_avltree_delete(	t_avltree *avltree, void *data,
//								int cmp(void *, void *));
//void		*gs_avltree_apply_preorder(t_avltree *avltree, void *data);
//void		*gs_avltree_apply_inorder(t_avltree *avltree, void *data);
//void		*gs_avltree_apply_postorder(t_avltree *avltree, void *data);
#endif
