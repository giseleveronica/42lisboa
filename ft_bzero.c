#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		*(unsigned char *)(s + x) = '\0';
		x++;
	}
}
