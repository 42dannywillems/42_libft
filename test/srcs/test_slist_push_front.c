/*
 * =============================================================================
 *
 *       Filename:  test_slist_push_front.c
 *
 *    Description:  test gs_slist_push_front
 *
 *        Version:  1.0
 *        Created:  2014-12-29 22:00:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Danny Willems (), 
 *   Organization:  
 *
 * =============================================================================
 */

#include "libft.h"

void	test_slist_push_front()
{
	t_slist *t;

	t = gs_slist_create(NULL);
	ft_putendl("------------------------------------");
	ft_putendl("Test de slist_push_front");

	t = gs_slist_push_front(t, "World");
	if (gs_slist_isempty(t))
		ft_putendl("Insertion ne s'est pas faite dans une liste vide");
	t = gs_slist_push_front(t, "Hello");
	if (ft_strequ("Hello", t->data) == FALSE)
		ft_putendl("Insertion ne s'est pas faite dans une liste non vide");
	gs_slist_print(t);
	t = gs_slist_push_front(t, "Last test");
	gs_slist_print(t);
}
