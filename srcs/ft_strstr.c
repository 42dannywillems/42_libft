#include "libft.h"

int		check_all(const char *str, const char *to_find)
{
	count_t j;
	size_t len_str;

	j = 0;
	len_str = ft_strlen(str);
	while (to_find[j] != '\0')
	{
		if (j < len_str)
		{
			if (str[j] != to_find[j])
				return (0);
		}
		else
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(const char *str, const char *to_find)
{
	count_t	i;

	i = 0;
	if (*to_find != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[0])
			{
				if (check_all(str + i, to_find))
				{
					return (char *)(str + i);
				}
			}
			i++;
		}
		return (0);
	}
	else
		return (char *)(str);
}
