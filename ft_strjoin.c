char *ft_strjoin(char const *s1, char const *s2)
{
    size_t x;
    size_t y;
    char *copy;
    
    x = 0;
    y = 0;    
    copy = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
    if (copy == NULL)
        return (NULL);
    while(s1[x])
    {
        copy[x] = ((char*)s1)[x];
        x++;
    }
    while(s2[y])
    {
        copy[x] = ((char*)s2)[y++];
        x++;
    }
    copy[x] = '\0';
    return (copy);
}
