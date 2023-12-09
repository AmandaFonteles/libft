//HEADER 42

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include minha biblioteca

static char *alloc_substr(size_t n)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (!str)
        return NULL;
    return (str);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;

    if(!s) 
        return NULL;
    if (start > ft_strlen(s))
        len = 0;
    else if (len > ft_strlen(s) - start)
    len = ft_strlen(s) - start;
    substr = alloc_substr(len);
    if (!substr)
        return NULL;
    i = 0;
    while( i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}

/*int main() {
    char *result;
    char test_str[] = "Hello, World!";

    // Test 1: Normal case
    result = ft_substr(test_str, 7, 5);
    printf("Test 1: %s\n", result);
    free(result); // Remember to free the allocated memory

    // Test 2: Start index is beyond the end of the string
    result = ft_substr(test_str, 20, 5);
    printf("Test 2: %s\n", result);
    free(result);

    // Test 3: Length goes beyond the end of the string
    result = ft_substr(test_str, 7, 20);
    printf("Test 3: %s\n", result);
    free(result);

    // Test 4: Start at 0, full length
    result = ft_substr(test_str, 0, strlen(test_str));
    printf("Test 4: %s\n", result);
    free(result);

    // Test 5: Empty string
    result = ft_substr("", 0, 5);
    printf("Test 5: %s\n", result);
    free(result);

    // Test 6: Null string
    result = ft_substr(NULL, 0, 5);
    if (result == NULL) {
        printf("Test 6: Passed (NULL string)\n");
    } else {
        printf("Test 6: Failed\n");
    }

    return 0;
}*/