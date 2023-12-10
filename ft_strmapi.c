//HEADER 42

#include "libft.h"

char    *ft_strmmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *str;

    if(!s)
        return NULL;
    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));  
    if(!str)
        return NULL;
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }  
    str[i] = '\0';
    return (str);
}