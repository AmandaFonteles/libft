//HEADER 42

#include <unistd.h>
//#include minha bibli
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strjoin(const char  *s1, const char *s2) 
{
    char    *result;
    size_t  len;
    size_t  i;
    size_t  j;

    len = 0;
    i = 0;
    j = 0;
    if (s1 != NULL && s2 != NULL)
        len = ft_strlen(s1) + ft_strlen(s2);
    result = (char*)malloc(sizeof(char) * (len + 1));
    if (!result)
        return NULL;
    while (s1 && s1[i]) 
    {
        result[i] = s1[i];
        i++;
    }
    while (s2 && s2[j]) 
    {
        result[i + j] = s2[j];
        j++;
    }
    result[i + j] = '\0';
    return result;
}

/*// Sample main function for testing
int main() {
    char *result;
    char *test1 = "Hello, ";
    char *test2 = "World!";
    char *empty = "";
    char *null = NULL;

    // Test with normal strings
    result = ft_strjoin(test1, test2);
    printf("Joining 'Hello, ' and 'World!': %s\n", result);
    free(result); // Remember to free the memory

    // Test with one empty string
    result = ft_strjoin(test1, empty);
    printf("Joining 'Hello, ' and '': %s\n", result);
    free(result);

    // Test with other empty string
    result = ft_strjoin(empty, test2);
    printf("Joining '' and 'World!': %s\n", result);
    free(result);

    // Test with both strings empty
    result = ft_strjoin(empty, empty);
    printf("Joining '' and '': %s\n", result);
    free(result);

    // Test with one NULL string
    result = ft_strjoin(test1, null);
    printf("Joining 'Hello, ' and NULL: %s\n", result); // Your implementation may vary here
    if (result) free(result);

    // Test with other NULL string
    result = ft_strjoin(null, test2);
    printf("Joining NULL and 'World!': %s\n", result); // Your implementation may vary here
    if (result) free(result);

    // Test with both strings NULL
    result = ft_strjoin(null, null);
    printf("Joining NULL and NULL: %s\n", result); // Your implementation may vary here
    if (result) free(result);

    return 0;
}*/