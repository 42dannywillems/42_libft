#ifndef GS_BSTREE_H
# define GS_BSTREE_H

#include "libft.h"

typedef struct		s_bstree 
{
			struct s_bstree *parent;
			struct s_bstree *left;
			struct s_bstree *right;
			void			*data;
			//int			cmp(void *, void *);
			//int				height;
}					t_bstree;
/* ----------  end of struct bstree  ---------- */

/* NOT TESTED !! */

t_bstree	*gs_bstree_create(void *data);
t_bstree	*gs_bstree_min(t_bstree *bstree);
t_bstree	*gs_bstree_max(t_bstree *bstree);
t_bstree	*gs_bstree_find(t_bstree *bstree, void *data,
							int cmp(void *, void *));
t_bstree	*gs_bstree_insert(	t_bstree *bstree, void *data,
								int cmp(void *, void *));
//t_bstree	*gs_bstree_delete(	t_bstree *bstree, void *data,
//								int cmp(void *, void *));
t_bstree	*gs_bstree_successor(	t_bstree *bstree, void *data,
									int cmp(void *, void *));
t_bstree	*gs_bstree_predecessor(	t_bstree *bstree, void *data,
									int cmp(void *, void *));

#endif
