//HEADER 42

#include <unistd.h> //I dont think it's necessary
#include <libft> //replace with the good library

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  srcsize;

    i = 0;
    srcsize = 0;
    while(src[srcsize] != '\0')
    {
        srcsize++;
    }

    if (dstsize == 0)
    {
        return(srcsize);
    }
    while (i < (dstsize - 1) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(srcsize);
}