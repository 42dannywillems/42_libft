/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:24:00 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 13:17:11 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GS_SLIST_H
# define GS_SLIST_H

# include <stdlib.h>
# include "gs_typedef.h"

typedef struct		s_slist
{
	void			*data;
	struct s_slist	*next;
}					t_slist;

t_slist				*gs_slist_create(void *data, t_slist *next);
void				gs_slist_clear(t_slist **list);
t_slist				*gs_slist_pop(t_slist **list);
t_slist				*gs_slist_delete_nth(t_slist **list, pos_t i);
t_slist				*gs_slist_delete(t_slist *list, void *data,
								int cmp(void *, void *));
t_slist				*gs_slist_delete_first(t_slist *list, void *data,
								int cmp(void *, void *));
size_t				gs_slist_size(const t_slist *list);
bool_t				gs_slist_isempty(const t_slist *list);

t_slist				*gs_slist_push_front(t_slist *list, void *data);
t_slist				*gs_slist_merge(t_slist *list1, t_slist *list2);
t_slist				*gs_slist_reverse(t_slist *list);

t_slist				*gs_slist_at(t_slist *list, pos_t i);
t_slist				*gs_slist_find(t_slist *list, void *data_ref,
						int (*cmp)(void *, void *));
t_slist				*gs_slist_find_max(t_slist *list,
						int (*cmp)(void *, void *));
t_slist				*gs_slist_find_min(t_slist *list,
						int (*cmp)(void *, void *));

/*
** not tested
*/
char				**gs_slist_toarray(t_slist *list, bool_t delete_list);

void				gs_slist_print(t_slist *list);
#endif
