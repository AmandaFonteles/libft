//HEADER 42

#include "libft.h"

static char *alloc_substr(size_t n)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (!str)
        return NULL;
    return (str);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;

    if(!s) 
        return NULL;
    if (start > ft_strlen(s))
        len = 0;
    else if (len > ft_strlen(s) - start)
    len = ft_strlen(s) - start;
    substr = alloc_substr(len);
    if (!substr)
        return NULL;
    i = 0;
    while( i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}