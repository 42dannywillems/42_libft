/*
 * =============================================================================
 *
 *       Filename:  test_slist_size.c
 *
 *    Description:  test gs_slist_size
 *
 *        Version:  1.0
 *        Created:  2014-12-29 22:06:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Danny Willems (), 
 *   Organization:  
 *
 * =============================================================================
 */

#include "libft.h"

void	test_slist_size()
{
	t_slist *t;

	ft_putendl("------------------------------------");
	ft_putendl("Test gs_slist_size");
	t = gs_slist_create(NULL);
	if (gs_slist_size(t) == 0)
		ft_putendl("Test vide : OK");
	else
		ft_putendl("Test vide : PAS OK");

	t = gs_slist_push_front(t, "hello");
	if (gs_slist_size(t) == 1)
		ft_putendl("Test 1 : OK");
	else
		ft_putendl("Test 1 : PAS OK");

	t = gs_slist_push_front(t, "hello");
	if (gs_slist_size(t) == 2)
		ft_putendl("Test 2 : OK");
	else
		ft_putendl("Test 2 : PAS OK");

	t = gs_slist_push_front(t, "hello");
	if (gs_slist_size(t) == 3)
		ft_putendl("Test 3 : OK");
	else
		ft_putendl("Test 3 : PAS OK");

}
