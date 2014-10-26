#ifndef GS_STACK_H
# define GS_STACK_H

# include "gs_snode.h"
# include <stdlib.h>

typedef struct		s_stack
{
	struct s_snode	*head;
	struct s_snode	*tail;
	size_t			size;
}					t_stack;

#endif
