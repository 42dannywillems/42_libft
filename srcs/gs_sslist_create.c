/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslit_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:59 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 12:33:37 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_sslit.h"

t_sslit		*gs_sslit_create(void *data, t_sslit *next)
{
	t_sslit	*list;

	list = (t_sslit *)malloc(sizeof(t_sslit));
	if (list)
	{
		list->data = data;
		list->next = next;
	}
	return (list);
}
