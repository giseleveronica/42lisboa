#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;

	x = 0;
	if (!dst && !src && len)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
			*(char *)(dst + len) = *(const char *)(src + len);
	}
	else
	{
		while (x < len)
		{
			*(char *)(dst + x) = *(const char *)(src + x);
			x++;
		}
	}
	return (dst);
}