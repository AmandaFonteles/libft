//HEADER 42

#include <unistd.h> //idk if it's necessary
//#include <libft> //replace with the good library
//TESTADA: OK
//NORMA:

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
/*#include <stdio.h>
#include <string.h>

// Your ft_memcpy function goes here

int main() {
    char src[] = "Sample text for testing.";
    char dest1[30];
    char dest2[30];

    // Using your ft_memcpy function
    ft_memcpy(dest1, src, sizeof(src));

    // Using standard memcpy for comparison
    memcpy(dest2, src, sizeof(src));

    // Output results
    printf("Original Source: %s\n", src);
    printf("ft_memcpy Destination: %s\n", dest1);
    printf("memcpy Destination: %s\n", dest2);

    return 0;
}*/