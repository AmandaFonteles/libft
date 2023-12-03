//HEADER 42

#include <unistd.h>
//#include <minha biblioteca>

char    *ft_strdup(const char *s)
{
    size_t  i;
    size_t  len;
    char    *str;

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