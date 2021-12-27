#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char tofind;

	tofind = c;
	while (*str)
	{
		if (*str == tofind)
			return ((char *)str);
		str++;
	}
	if (*str == tofind)
		return ((char *)str);
	return (NULL);
}
