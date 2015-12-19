/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_push_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:13:03 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:14:15 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_slist.h"

t_slist	*gs_slist_push_front(t_slist *list, void *data)
{
	if (list)
	{
		if (list->data)
			return ((list = gs_slist_create(data, list)));
		else
		{
			list->data = data;
			return (list);
		}
	}
	return ((list = gs_slist_create(data, NULL)));
}
