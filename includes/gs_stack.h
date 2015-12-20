/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 12:58:02 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 13:26:14 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GS_STACK_H
# define GS_STACK_H

# include <stdlib.h>
# include "gs_typedef.h"

typedef struct		s_stack
{
	void			*data;
	struct s_stack	*next;
}					t_stack;

/*
** Creation, insert and merge
*/
t_stack				*gs_stack_create(void *data, t_stack *next);
t_stack				*gs_stack_merge(t_stack *list1, t_stack *list2);

/*
** Remove functions
*/
t_stack				*gs_stack_pop(t_stack **list);
void				gs_stack_clear(t_stack **list);

/*
** size related functions
*/
size_t				gs_stack_size(const t_stack *list);
t_bool				gs_stack_isempty(const t_stack *list);

/*
** Print functions
*/
void				gs_stack_print(t_stack *list);

#endif
