size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  x;
    size_t  y;
    size_t  ret;
    
    x = 0;
    y = strlen(dst);
    ret = strlen(dst) + strlen(src);  
    if (size >= strlen(dst) + 1)
    {
        while (y < size - 1 && src[x])
        {
            dst[y] = src[x];
            x++;
            y++;
        }
        dst[y] = '\0';
        return (ret);
    }
    return (strlen(src) + size);
}
