size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size > 0)
	{
		while (src[x] && x < (size - 1))
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	while (src[x])
		x++;
	return (x);
}
