//HEADER 42

#include <unistd.h>
//#include minha bibli
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*size_t ft_strlen(const char *str) //we use a const to indicate that the string shouldn't be modified by the function
{
    size_t i; //size_t is an unsigned integer type. Here we have a size_t variable named i.

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}*/

char    *ft_strjoin(const char  *s1, const char *s2) 
{
    char    *result;
    size_t  i;
    size_t  j;

    if (!s1 || !s2)
        return NULL;
    result = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!result)
        return NULL;
    i = 0;
    while (s1[i]) 
    {
        result[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j]) 
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