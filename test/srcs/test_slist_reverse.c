/*
 * =============================================================================
 *
 *       Filename:  test_slist_reverse.c
 *
 *    Description:  test gs_slist_reverse
 *
 *        Version:  1.0
 *        Created:  2014-12-29 22:18:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Danny Willems (), 
 *   Organization:  
 *
 * =============================================================================
 */

#include "libft.h"

void test_slist_reverse()
{
	t_slist *t;

	ft_putendl("------------------------------------");
	ft_putendl("Test gs_slist_reverse");

	t = gs_slist_create("1");
	t = gs_slist_push_front(t, "2");
	t = gs_slist_push_front(t, "3");
	t = gs_slist_push_front(t, "4");
	gs_slist_print(t);

	t = gs_slist_reverse(t);
	gs_slist_print(t);

}
