#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	x;

	x = 0;
	while (s[x])
		write(fd, &s[x++], 1);
	write(fd, "\n", 1);
}
