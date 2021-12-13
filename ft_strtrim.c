char *ft_strtrim(char const *s1, char const *set)
{
    int x;    
    int begin;
    int end;
    char *string;
    char *toremove;
    
    x = 1;
    begin = 0;
    end = strlen(s1) - 1;
    string = (char *)s1;
    toremove = (char *)set;
    while (toremove[begin] == string[begin])
        begin++;
    if (begin == strlen(set)+1)
        return (string);
    while (toremove[strlen(toremove)-(x++)] == string[end--])
        end--;
    string = ft_substr(string, begin, end - begin + x);
    printf("begin: %d\n", begin);
    printf("end: %d\n", end);
    return (string);
}
