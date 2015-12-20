/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 13:28:28 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_sslist.h"

t_sslist		*gs_sslist_create(void *data, t_sslist *next)
{
	t_sslist	*list;

	list = (t_sslist *)malloc(sizeof(t_sslist));
	if (list)
	{
		list->data = data;
		list->next = next;
	}
	return (list);
}
