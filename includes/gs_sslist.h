#ifndef GS_SSLIST_H
# define GS_SSLIST_H

# include <stdlib.h>
# include "gs_typedef.h"

# define t_sslist							t_slist
# define gs_sslist_create(x, y)				gs_slist_create(x, y)
# define gs_sslist_pop(x)					gs_slist_pop(x)
# define gs_sslist_clear(x, y)				gs_slist_clear(x, y)
# define gs_sslist_delete(x, y, z)			gs_slist_delete(x, y, z)
# define gs_sslist_delete_nth(x, y)			gs_slist_delete_nth(x, y)
# define gs_sslist_delete_first(x, y, z)	gs_slist_delete_first(x, y, z)
# define gs_sslist_size(x)					gs_slist_size(x)
# define gs_sslist_isempty(x)				gs_slist_isempty(x)
# define gs_sslist_at(x, y)					gs_slist_at(x, y)
# define gs_sslist_find(x, y, z)			gs_slist_find(x, y, z)

t_sslist	*gs_sslist_insert(	t_sslist *list, void *data,
								int cmp(void *, void*));
t_sslist	*gs_sslist_merge(	t_sslist *list1, t_sslist *list2,
								int cmp(void *, void *));

// To_check
//char	**gs_sslist_toarray(t_slist *list, bool_t delete_list);

//void	gs_sslist_print(t_slist *list);
#endif
