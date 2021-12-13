void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  x;
    char    *copy_src;
    
    x = 0;
    copy_src = (char*)src;
    if (!copy_src)
        return (NULL);
    if (dst > src)
    {
        while (len-- > 0)
        {
            ((char*)dst)[x] = copy_src[x];
            x++;
        }
    }
    else
    {
        while (copy_src[x] && len-- > 0)
        {
            ((char*)dst)[x] = copy_src[x];
            x++;
        }
    }
    return (dst);
}
