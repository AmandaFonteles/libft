//HEADER 42

#include <unistd.h> //I dont think it's necessary
//#include <libft> //replace with the good library
//TESTADA: OK
//NORMA:

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  srcsize;

    i = 0;
    srcsize = 0;
    while(src[srcsize] != '\0')
        srcsize++;
    if (dstsize == 0)
        return(srcsize);
    while (i < (dstsize - 1) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(srcsize);
}
/*#include <stdio.h>
#include <string.h>

// Assume ft_strlcpy is already defined here

int main() {
    char src[] = "Hello, world!";
    char dst1[50];
    size_t result_ft;

    // Testing ft_strlcpy
    result_ft = ft_strlcpy(dst1, src, sizeof(dst1));
    printf("ft_strlcpy: Copied '%s', length = %zu\n", dst1, result_ft);

    return 0;
}*/