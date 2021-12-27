#include "libft.h"

static int	number_size(int n)
{
	int	x;

	x = 1;
	while (n / 10)
	{
		x++;
		n = n / 10;
	}
	return (x);
}

static char	*malloc_string(int n, int size)
{
	char	*string;

	if (n < 0)
		string = malloc(sizeof(char) * (size + 1) + 1);
	else
		string = malloc(sizeof(char) * size + 1);
	if (string == NULL)
		return (NULL);
	return (string);
}

static void	create_string(char *s, int n, int size)
{
	int	x;
	int	sign;

	x = 0;
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	while (x < size)
	{
		s[x] = (n % 10) * sign + '0';
		n = n / 10;
		x++;
	}
	if (sign == -1)
		s[x++] = '-';
	s[x] = '\0';
}

static void	reverse_string(char *s)
{
	size_t		x;
	size_t		y;
	char	aux;

	x = 0;
	y = ft_strlen(s) - 1;
	s[y + 1] = '\0';
	while (x != ft_strlen(s) / 2)
	{
		aux = s[x];
		s[x++] = s[y];
		s[y--] = aux;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	char	*string;

	size = number_size(n);
	string = malloc_string(n, size);
	create_string(string, n, size);
	reverse_string(string);
	return (string);
}
