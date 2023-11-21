//HEADER 42

#include <unistd.h>
#include <LIBFT> // change after!!

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *str;
    size_t  i;

    str = s;
    i = 0;
    while (i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (s);
}