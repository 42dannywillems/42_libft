#include "libft.h"
#include "gs_slist.h"
#include "gs_slist_prototypes.h"
#include "gs_typedef.h"

char	**ft_strsplit(const char *str, const char *sep)
{
	count_t		i;
	size_t		len;
	size_t		len_sep;
	size_t		len_str;
	t_slist		*list;
	
	i = 0;
	len_sep = ft_strlen(sep);
	len_str = ft_strlen(str);
	list = NULL;

	while (i < len_str)
	{
		len = 0;
		while (i < len_str && ft_strnequ(str + i, sep, len_sep))
			i += len_sep;
		while (	i + len < len_str 
				&& ft_strnequ(str + i + len, sep, len_sep) == 0)
			len++;
		if (len > 0)
			gs_slist_push_back(list, ft_strsub(str, i, len));
		i += len;
	}
	return (gs_slist_toarray(list, 0));
}
