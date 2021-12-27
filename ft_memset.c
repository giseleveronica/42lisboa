#include "libft.h"

void	*ft_memset(void *mem_loc, int c, size_t n)
{
	size_t	x;
	char	*aux;

	aux = mem_loc;
	x = 0;
	while (x < n)
		aux[x++] = c;
	mem_loc = &aux;

	return(mem_loc);
}
