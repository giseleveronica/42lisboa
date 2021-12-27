#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*string;

	index = 0;
	string = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!string || !s || !f)
		return (NULL);
	while (s[index])
	{
		string[index] = f(index, s[index]);
		index++;
	}
	string[index] = '\0';
	return (string);
}
