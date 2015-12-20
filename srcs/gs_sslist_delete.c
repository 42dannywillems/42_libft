/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslit_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 12:37:08 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sslit	*gs_sslit_delete(t_sslit *list, void *data, int cmp(void *, void *))
{
	t_sslit *tmp;

	if (gs_sslit_isempty(list))
		return (NULL);
	else if (cmp(list->data, data) == 0)
	{
		tmp = list->next;
		free(list);
		tmp = gs_sslit_delete(tmp, data, cmp);
		return (tmp);
	}
	else
	{
		list->next = gs_sslit_delete(list->next, data, cmp);
		return (list);
	}
}
