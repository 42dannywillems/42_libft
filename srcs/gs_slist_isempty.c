/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_slist_isempty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:17:11 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:17:11 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_slist.h"

bool_t	gs_slist_isempty(const t_slist *list)
{
	return (list == NULL || list->data == NULL);
}
