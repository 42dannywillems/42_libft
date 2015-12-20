/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:58 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 13:28:37 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_sslist.h"

t_sslist	*gs_sslist_at(t_sslist *list, t_pos i)
{
	if (!gs_sslist_isempty(list))
		if (i == 0)
			return (list);
		else
			return (gs_sslist_at(list->next, i - 1));
	else
		return (NULL);
}
