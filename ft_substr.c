//HEADER 42

#include <unistd.h>
//#include minha biblioteca

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int s_len;
    char *substr;

    if (!s)
        return (NULL);

    s_len = ft_strlen(s);
    if (s_len < start)
    {
        substr = malloc(sizeof(char) * 1);
        if (!substr)
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }

    if (len > s_len - start)
        len = s_len - start;

    substr = malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);

    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';

    return (substr);
}