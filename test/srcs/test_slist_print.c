/*
 * =============================================================================
 *
 *       Filename:  test_slist_print.c
 *
 *    Description:  test gs_slist_print
 *
 *        Version:  1.0
 *        Created:  2014-12-29 21:50:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Danny Willems (), 
 *   Organization:  
 *
 * =============================================================================
 */

#include "libft.h"

void	test_slist_print()
{
	t_slist *t;

	ft_putendl("------------------------------------");
	ft_putendl("Test gs_slist_print");
	t = gs_slist_create("Hello");
	gs_slist_print(t);
}
