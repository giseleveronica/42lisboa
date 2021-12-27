#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	size_t	ret;

	x = 0;
	y = ft_strlen(dst);
	ret = ft_strlen(dst) + ft_strlen(src);
	if (dstsize >= ft_strlen(dst) + 1)
	{
		while (y < dstsize - 1 && src[x])
		{
			dst[y] = src[x];
			x++;
			y++;
		}
		dst[y] = '\0';
		return (ret);
	}
	return (ft_strlen(src) + dstsize);
}
