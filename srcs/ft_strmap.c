/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 13:44:49 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 13:44:49 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*n_s;
	t_count	i;

	ISNULL(s);
	n_s = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		n_s[i] = (*f)(s[i]);
		i++;
	}
	return (n_s);
}
