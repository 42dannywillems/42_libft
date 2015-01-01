#include "libft.h"

/* We don't have to check if s is NULL because it's done in ft_strlen */
void	ft_strclr(char *s)
{
	ft_memset(s, ft_strlen(s), 0);
}
