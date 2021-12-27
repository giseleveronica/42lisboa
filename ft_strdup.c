#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	x;
	char	*copy;

	x = 0;
	copy = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	while (s1[x])
	{
		copy[x] = s1[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}
