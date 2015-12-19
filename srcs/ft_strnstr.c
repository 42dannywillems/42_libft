/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:00:19 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:00:48 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len_needle;
	char	*ret;

	ret = (char *)haystack;
	if (*needle == '\0')
		return (ret);
	len_needle = ft_strlen(needle);
	while (*ret)
	{
		ret = ft_strnchr(ret, needle[0], n);
		if (ret)
		{
			if (ft_strnequ(ret, needle, len_needle))
				return (ret);
			ret++;
		}
		else
			return (ret);
	}
	return (NULL);
}
