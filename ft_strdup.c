char *ft_strdup(const char *s)
{
    size_t x;
    char *copy;
    
    x = 0;
    copy = malloc(sizeof(char) * strlen(s) + 1);
    if (copy == NULL)
        return NULL;
    while(s[x])
    {
        copy[x] = s[x];
        x++;
    }
    copy[x] = '\0';
    return (copy);
}
