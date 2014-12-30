/*
 * =============================================================================
 *
 *       Filename:  test_slist_isempty.c
 *
 *    Description:  test gs_slist_isempty
 *
 *        Version:  1.0
 *        Created:  2014-12-29 21:44:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Danny Willems (), 
 *   Organization:  
 *
 * =============================================================================
 */

#include "libft.h"

void	test_slist_isempty()
{
	t_slist *t;

	ft_putendl("------------------------------------");
	ft_putendl("Test de gs_slist_isempty");
	t = NULL;
	if (gs_slist_isempty(t) == FALSE)
		ft_putendl("Erreur avant creation et assignation");

	t = gs_slist_create(NULL);
	if (gs_slist_isempty(t) == FALSE)
		ft_putendl("Erreur avec data vide");

	t = gs_slist_create("Test");
	if (gs_slist_isempty(t) == TRUE)
		ft_putendl("Erreur avec data non vide");
	else
		ft_putendl("OK");
}
