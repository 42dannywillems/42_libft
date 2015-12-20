/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslit_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:12:58 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 12:38:37 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gs_sslit.h"

t_sslit	*gs_sslit_at(t_sslit *list, pos_t i)
{
	if (!gs_sslit_isempty(list))
		if (i == 0)
			return (list);
		else
			return (gs_sslit_at(list->next, i - 1));
	else
		return (NULL);
}
