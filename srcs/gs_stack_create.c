/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 12:45:18 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_stack.h"

t_stack		*gs_stack_create(void *data, t_stack *next)
{
	t_stack	*list;

	list = (t_stack *)malloc(sizeof(t_stack));
	if (list)
	{
		list->data = data;
		list->next = next;
	}
	return (list);
}
