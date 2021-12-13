void    *ft_calloc(size_t nitems, size_t size)
{
    void *ret;
    
    ret = malloc(size * nitems);
    if (ret)
        return (ret);
    else
        return NULL;
}
