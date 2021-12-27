#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;
	char tofind;

	tofind = c;
	len = ft_strlen(str) - 1;
	if (!tofind)
		return ((char *)str + ft_strlen(str));
	while (len >= 0)
	{
		if (str[len] == tofind)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
