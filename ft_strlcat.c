//HEADER 42

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{

    size_t  i; //destinationlen
    size_t  j; //sourcelen
    size_t  k; //counter for source string

    i = 0;
    j = 0;
    k = 0;
    while(dst[i] != '\0')
        i++;
    while(src[j] != '\0')
        j++;
    if (i >= dstsize) // dstsize = buffersize
        return(i + j);
    else
    {
        while((i + k) < (dstsize - 1) && src[k] != '\0')
        {
            dst[i + k] = src[k];
            k++;
        }
        dst[i + k] = '\0';
        return (i + j);
    }
}