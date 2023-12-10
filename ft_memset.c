//HEADER 42

#include <unistd.h>
//#include <LIBFT> // change after!!

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
/*#include <string.h>
#include <stdio.h>
int main() {
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    char str3[50] = "Hello, World!";
    char str4[50] = "Hello, World!";

    // Using ft_memset to set first 5 characters of str1 to 'a'
    ft_memset(str1, 'a', 5);
    printf("ft_memset: %s\n", str1);

    // Using memset to set first 5 characters of str2 to 'a'
    memset(str2, 'a', 5);
    printf("memset: %s\n", str2);

    // Comparing with a different character and length
    ft_memset(str3, 'x', 10);
    printf("ft_memset: %s\n", str3);

    memset(str4, 'x', 10);
    printf("memset: %s\n", str4);

    return 0;
}*/