//HEADER 42

#include <unistd.h>
//#include LIBFT
//TESTADA: OK
//NORMA:

void    *ft_memchr(const void  *s, int c, size_t n)
{
    const unsigned char *str; //Declare a pointer to unsigned char to treat the input memory as bytes
    size_t  i;

    str = (const unsigned char*)s; //Cast the input pointer to a pointer to unsigned char for byte-wise comparison
    i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
        {
            return ((void *)&str[i]); //Return a pointer to the first occurrence of the character
        }
        i++;
    } 
// If the character is not found within the specified number of bytes, return NULL
    return NULL;
}
/*#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    char c = 'o';
    size_t n = sizeof(str);

    // Using your function
    char *result1 = (char *)ft_memchr(str, c, n);

    // Using the standard library function
    char *result2 = (char *)memchr(str, c, n);

    // Compare and print results
    printf("Using ft_memchr: %s\n", result1 ? result1 : "Character not found");
    printf("Using memchr: %s\n", result2 ? result2 : "Character not found");

    // Optionally, compare addresses to see if they match
    if (result1 == result2) {
        printf("Both functions returned the same address.\n");
    } else {
        printf("Functions returned different addresses.\n");
    }

    return 0;
}*/