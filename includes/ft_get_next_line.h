#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

#include "libft.h"
#include <unistd.h>

#define GNL_ERROR -1
#define GNL_FINISHED 0
#define GNL_OK 1
#define GNL_END -1
#define GNL_JOIN -2

#define READ_ERROR -1
#define READ_FINISHED 0

typedef struct		s_file
{
	int		fd;
	char	*red;
	char	*b_red;
}					t_file;

int				ft_get_next_line(int fd, char **line);

#endif
