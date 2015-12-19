/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 13:57:21 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 13:57:21 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	count_t i;

	ISNULL_ZERO(s1);
	ISNULL_ZERO(s2);
	i = 1;
	if (*s2 == '\0')
		return (1);
	else if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
