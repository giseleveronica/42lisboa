#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	x;
	unsigned char	*string1;
	unsigned char	*string2;
	
	x = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (n > x)
	{
		if (string1[x] != string2[x])
			return (string1[x] - string2[x]);
		x++;
	}
	return (0);
}
