/*
 * =============================================================================
 *
 *       Filename:  test_slist_create.c
 *
 *    Description:  test gs_slist_create
 *
 *        Version:  1.0
 *        Created:  2014-12-29 21:16:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Danny Willems (), 
 *   Organization:  
 *
 * =============================================================================
 */

#include "libft.h"

void	test_slist_create()
{
	t_slist	*t;

	ft_putendl("------------------------------------");
	ft_putendl("Test gs_slist_create");
	t = gs_slist_create("hello");
	if (t)
	{
		if (t->next)
			ft_putendl("Erreur pour l'assignation de next");
		else if (!ft_strequ("hello", t->data))
			ft_putendl("Erreur pour le data");
		else
			ft_putendl("OK");
	}
}
