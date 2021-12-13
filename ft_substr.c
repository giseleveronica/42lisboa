char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int x;
    char *copy;
    
    copy = malloc(sizeof(char) * len + 1);
    if (copy == NULL)
        return NULL;
    while (x < len)
    {
        copy[x] = s[start];
        x++;
        start++;
    }
    copy[x] = '\0';
    return (copy);
}
