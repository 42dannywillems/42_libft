/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:58 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:13:24 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_slist.h"

void	gs_slist_clear(t_slist **list)
{
	t_slist *tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	*list = NULL;
}
