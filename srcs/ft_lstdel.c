/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:10:17 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 12:10:19 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	while (alst && *alst)
	{
		tmp = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = tmp;
	}
	alst = NULL;
}
