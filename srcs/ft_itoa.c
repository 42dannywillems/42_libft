/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:08:52 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 13:24:27 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_loc(char *s, int n, t_count i)
{
	s[i] = '0' + n % 10;
	if (n >= 10)
		ft_itoa_loc(s, n / 10, i - 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len_str;
	t_bool	neg_val;

	len_str = ft_intlen(n);
	if ((neg_val = n < 0))
		len_str++;
	str = ft_strnew(len_str);
	{
		if (neg_val)
		{
			str[0] = '-';
			n *= -1;
		}
		ft_itoa_loc(str + neg_val, n, len_str - 1 - neg_val);
	}
	return (str);
}
