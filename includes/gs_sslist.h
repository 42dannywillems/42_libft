/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:37:38 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 12:50:07 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GS_SSLIST_H
# define GS_SSLIST_H

# include "gs_typedef.h"
# include "libft.h"

typedef struct		s_sslist
{
	void			*data;
	struct s_sslist	*next;
}					t_sslist;

/*
** Creation, insert and merge
*/
t_sslist			*gs_sslist_create(void *data, t_sslist *next);
t_sslist			*gs_sslist_insert(t_sslist *list, void *data,
								int cmp(void *, void*));
t_sslist			*gs_sslist_merge(t_sslist *list1, t_sslist *list2,
								int cmp(void *, void *));

/*
** Remove functions
*/
t_sslist			*gs_sslist_pop(t_sslist **list);
void				gs_sslist_clear(t_sslist **list);
t_sslist			*gs_sslist_delete_nth(t_sslist **list, pos_t i);
t_sslist			*gs_sslist_delete(t_sslist *list, void *data,
								int cmp(void *, void *));

/*
** size related functions
*/
size_t				gs_sslist_size(const t_sslist *list);
bool_t				gs_sslist_isempty(const t_sslist *list);

/*
** Search related function
*/
t_sslist			*gs_sslist_at(t_sslist *list, pos_t i);
t_sslist			*gs_sslist_find(t_sslist *list, void *data_ref,
						int (*cmp)(void *, void *));

/*
** Print functions
*/
void				gs_sslist_print(t_sslist *list);

/*
** To_check
** char	**gs_sslist_toarray(t_sslist *list, bool_t delete_list);
*/

#endif
