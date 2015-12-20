/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslit_delete_nth.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:00 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 12:36:29 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "gs_sslit.h"

t_sslit	*gs_sslit_delete_nth(t_sslit **list, pos_t i)
{
	t_sslit *ret;
	t_sslit *previous;
	t_sslit *data;

	previous = NULL;
	data = NULL;
	ret = *list;
	if (i == 0)
		return (gs_sslit_pop(list));
	while (i > 0 && *list)
	{
		previous = *list;
		*list = (*list)->next;
		i--;
	}
	if (i == 0)
	{
		data = *list;
		if (*list)
			previous->next = (*list)->next;
		else
			previous->next = NULL;
	}
	*list = ret;
	return (data);
}
