/*
 * =============================================================================
 *
 *       Filename:  test_slist_clear.c
 *
 *    Description:  test gs_slist_clear
 *
 *        Version:  1.0
 *        Created:  2014-12-29 22:14:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Danny Willems (), 
 *   Organization:  
 *
 * =============================================================================
 */

#include "libft.h"

void test_slist_clear()
{
	t_slist *t;

	ft_putendl("------------------------------------");
	ft_putendl("Test gs_slist_clear");

	t = gs_slist_create("hello");
	gs_slist_clear(&t);
	gs_slist_print(t);

	t = gs_slist_push_front(t, "hello");
	t = gs_slist_push_front(t, "world");
	gs_slist_print(t);
	gs_slist_clear(&t);
	gs_slist_print(t);
}
