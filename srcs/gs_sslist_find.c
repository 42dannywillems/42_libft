/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslit_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:00 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 12:39:38 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_sslit.h"

t_sslit	*gs_sslit_find(t_sslit *list, void *data_ref,
						int (*cmp)(void *, void *))
{
	if (!gs_sslit_isempty(list))
	{
		if (cmp(data_ref, list->data))
			return (gs_sslit_find(list->next, data_ref, cmp));
		else
			return (list);
	}
	else
		return (NULL);
}
