/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:00 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 13:29:58 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_sslist.h"

t_sslist	*gs_sslist_find(t_sslist *list, void *data_ref,
						int (*cmp)(void *, void *))
{
	if (!gs_sslist_isempty(list))
	{
		if (cmp(data_ref, list->data))
			return (gs_sslist_find(list->next, data_ref, cmp));
		else
			return (list);
	}
	else
		return (NULL);
}
