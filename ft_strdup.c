//HEADER 42

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  i;
    size_t  len;
    char    *str;

    if (s == NULL)
        return NULL;

    i = 0;
    len = ft_strlen(s);
    if(!(str = malloc(sizeof(char) * (len + 1))))
        return 0;
    while (i < len)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}