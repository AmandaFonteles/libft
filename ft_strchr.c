//HEADER42

#include "libft.h"

char    *ft_strchr(const char   *s, int   c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        {
            return (char *)&s[i];
        }
        i++;
    }

    if (s[i] == (char)c) //we use this last if to handle the case where c is '\0', since the while loop doesn't enter the first if when s[i] = '\0'
    {
        return (char *)&s[i];
    }

    return NULL;
}