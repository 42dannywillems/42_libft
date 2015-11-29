/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:08:32 by dwillems          #+#    #+#             */
/*   Updated: 2015/11/29 17:08:35 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * \file ft_bzero.c
 * \author Danny Willems
 *
 * \fn void ft_bzero(void *s, size_t n)
 * \brief Same as bzero in the standard library
 *
 * bzero implementation.
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
