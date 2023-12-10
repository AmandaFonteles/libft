//HEADER 42

#include <unistd.h>
//#include <minha biblioteca>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//TESTADA: OK
//NORMA:

char    *ft_strdup(const char *s)
{
    size_t  i;
    size_t  len;
    char    *str;

    if (s == NULL)
        return NULL;

    i = 0;
    len = ft_strlen(s);
    if(!(str = malloc(sizeof(char) * (len + 1))))
        return 0;
    while (i < len)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

/*int main() {
    char *strings[] = {
        "Hello, world!",
        "", // Empty string
        "This is a longer string to test the ft_strdup function with a variety of characters: numbers 123, symbols !@#, and so on.",
        NULL // to test the function's response to null input
    };

    for (int i = 0; i < sizeof(strings) / sizeof(char *); i++) {
        char *original = strings[i];
        char *duplicate;

        if (original != NULL) {
            duplicate = ft_strdup(original);
            if (duplicate == NULL) {
                printf("Memory allocation failed for string: \"%s\"\n", original);
                continue;
            }

            printf("Original: \"%s\"\nDuplicate: \"%s\"\n", original, duplicate);

            // Check if the duplicate is the same as the original
            if (strcmp(original, duplicate) != 0) {
                printf("Error: The duplicate does not match the original.\n");
            }

            // Check if the duplicate is properly null-terminated
            if (duplicate[strlen(original)] != '\0') {
                printf("Error: The duplicate is not properly null-terminated.\n");
            }

            free(duplicate);
        } else {
            printf("Testing with NULL input...\n");
            duplicate = ft_strdup(original);
            if (duplicate != NULL) {
                printf("Error: Function should return NULL when input is NULL.\n");
                free(duplicate);
            } else {
                printf("Function correctly returned NULL for NULL input.\n");
            }
        }
    }

    return 0;
}*/