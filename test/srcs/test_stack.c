/*
 * =============================================================================
 *
 *       Filename:  test_stack.c
 *
 *    Description:  test_stack
 *
 *        Version:  1.0
 *        Created:  2014-12-29 22:24:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Danny Willems (), 
 *   Organization:  
 *
 * =============================================================================
 */

#include "libft.h"

void test_stack()
{
	t_stack *t;

	ft_putendl("------------------------------------");
	ft_putendl("Test stack");
	t = gs_stack_create(NULL);
	t = gs_stack_push(t, "hello");
	gs_stack_print(t);
}
