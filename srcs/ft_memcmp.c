#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *uc_s1;
	unsigned char *uc_s2;

	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*uc_s1 == *uc_s2)
		{
			uc_s1++;
			uc_s2++;
		}
		else
			return (*uc_s2 - *uc_s1);
	}
	return (*uc_s2 - *uc_s1);
}
