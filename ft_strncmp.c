#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	x;
	size_t  size;

	x = 0;
	size = ft_strlen(str1);
	if (ft_strlen(str2) > size)
	    size = ft_strlen(str2);
	while (size-- > 0 && n > x)
	{
		if (str1[x] != str2[x])
			return (str1[x] - str2[x]);
		x++;
	}
	return (0);
}
