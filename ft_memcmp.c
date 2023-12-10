//HEADER 42

#include <unistd.h>
//#include 'MINHA BIBLIOTECA'
//TESTADA: OK
//NORMA:

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t i;

    str1 = (const unsigned char*)s1;
    str2 = (const unsigned char*)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            return ((unsigned char)str1[i] - (unsigned char)str2[i]);
        }
        i++;
    }
    return (0);
}
/*#include <stdio.h>
#include <string.h>
int main() {
    // Test strings
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    const char *str3 = "Hello, C Programming!";

    // Test case 1: Identical strings
    int result_ft = ft_memcmp(str1, str2, strlen(str1));
    int result_std = memcmp(str1, str2, strlen(str1));
    printf("Comparison 1 results: ft_memcmp = %d, memcmp = %d\n", result_ft, result_std);

    // Test case 2: Different strings
    result_ft = ft_memcmp(str1, str3, strlen(str1));
    result_std = memcmp(str1, str3, strlen(str1));
    printf("Comparison 2 results: ft_memcmp = %d, memcmp = %d\n", result_ft, result_std);

    // Test case 3: Compare only first 5 characters
    result_ft = ft_memcmp(str1, str3, 5);
    result_std = memcmp(str1, str3, 5);
    printf("Comparison 3 results: ft_memcmp = %d, memcmp = %d\n", result_ft, result_std);

    return 0;
}*/