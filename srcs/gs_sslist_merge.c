/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gs_sslist_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:19:45 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:20:47 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "gs_sslist.h"

t_sslist	*gs_sslist_merge(t_sslist *list1, t_sslist *list2,
								int cmp(void *, void *))
{
	while (list2)
	{
		list1 = gs_sslist_insert(list1, list2->data, cmp);
		list2 = list2->next;
	}
	return (list1);
}
