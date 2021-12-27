#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	x;

	x = 0;
	if (!(*str2))
		return ((char *)str1);
	while (str1[x] && x < len)
	{
		if (ft_strncmp((char *)str1 + x, str2, ft_strlen(str2)) == 0)
		{
			if (x + ft_strlen(str2) > len)
				return (NULL);
			return ((char *)&str1[x]);
		}
		x++;
	}
	return (NULL);
}
