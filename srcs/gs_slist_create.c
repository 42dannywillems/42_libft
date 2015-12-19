/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:13:28 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_slist.h"

t_slist		*gs_slist_create(void *data, t_slist *next)
{
	t_slist	*list;

	list = (t_slist *)malloc(sizeof(t_slist));
	if (list)
	{
		list->data = data;
		list->next = next;
	}
	return (list);
}
