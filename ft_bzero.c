//HEADER 42

#include <unistd.h>

//#include <LIBFT> // replace with my library
//TESTADA: OK
//NORMA:

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
 /*#include <stdio.h>
 #include <string.h>
int main() {
    char str[50] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Using ft_bzero to set the first 10 characters of str to '\0'
    ft_bzero(str, 10);
    printf("After ft_bzero: ");

    // Print each character of the string, including '\0'
    for (int i = 0; i < 50; i++) {
        if (str[i] == '\0') {
            printf("\\0");
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}*/