//HEADER 42

#include "libft.h"

void    *ft_memcpy (void    *dest, const void   *src, size_t    n)
{
    size_t  i;
    unsigned char   *dst;
    const unsigned char *source;

    if (!dest && !src)
        return NULL;
    dst = (unsigned char*)dest;
    source = (const unsigned char*)src;
    i = 0;
    while (i < n)
    {
        dst[i] = source[i];
        i++;
    }
    return (dest);
}