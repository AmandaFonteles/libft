//HEADER 42

#include <unistd.h> //- PRECISA! Sem o programa nao reconhece size_t
//#include <libft> - mudar p a biblioteca certa
//TESTADA: OK
//NORMA:

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    //we need to calculate the destinationlenght + the sourcelength (using while dst[i] != '\0' and the same for src[j]). That'll be the return value.
    //If the destinationlenght is already equal or bigger than dstsize, return destinationlenght + sourcelenght
    //use while loop beginning from  i = destinationlenght, while i < destinationlenght + the sourcelength && i < dstsize(buffersize) - 1 copy src to dst
    //put a null terminator at the end of the concatenate string(i+k).
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
/*#include <stdio.h>

int main() {
    char dest[50];
    char src[] = " World";
    size_t dstsize;
    size_t result;

    // Test 1: Normal concatenation
    dest[0] = 'H';
    dest[1] = 'e';
    dest[2] = 'l';
    dest[3] = 'l';
    dest[4] = 'o';
    dest[5] = '\0';
    dstsize = sizeof(dest);
    result = ft_strlcat(dest, src, dstsize);
    printf("Test 1 - Result: %zu, String: %s\n", result, dest);

    // Test 2: Concatenation with limited buffer size
    char small_dest[10] = "Hello";
    dstsize = 9; // Limiting buffer size to 9
    result = ft_strlcat(small_dest, src, dstsize);
    printf("Test 2 - Result: %zu, String: %s\n", result, small_dest);

    // Test 3: Buffer size is exactly the size of the existing string (no space for concatenation)
    char exact_dest[6] = "Hello";
    dstsize = 6; // Buffer size equal to length of exact_dest including null terminator
    result = ft_strlcat(exact_dest, src, dstsize);
    printf("Test 3 - Result: %zu, String: %s\n", result, exact_dest);

    return 0;
}*/