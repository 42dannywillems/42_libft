/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:03:09 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 23:19:22 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *str, char c)
{
	char	*sep;

	sep = ft_strnew(1);
	sep[0] = c;
	sep[1] = '\0';
	return (ft_strsplit_str(str, sep));
}
