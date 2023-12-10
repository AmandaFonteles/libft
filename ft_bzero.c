//HEADER 42

#include "libft.h"

void    ft_bzero(void   *s, size_t n)
{
    size_t  i;
    unsigned char   *ptr;

    ptr = s;
    i = 0;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}