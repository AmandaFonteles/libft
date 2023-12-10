//HEADER 42

//#include MINHA BIBL
#include <stdlib.h>
#include <unistd.h>
//TESTADA: OK
//NORMA:

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

char    *ft_strmmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *str;

    if(!s)
        return NULL;
    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));  
    if(!str)
        return NULL;
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }  
    str[i] = '\0';
    return (str);
}
/*#include <stdio.h>


// A simple function to be used with ft_strmmapi. 
// For example, it increments each character by 1.
char increment_char(unsigned int i, char c) {
    (void)i; // This line is to avoid unused variable warning for 'i'.
    return c + 1;
}

int main() {
    char const *original_str = "Hello World!";
    char *modified_str;

    // Calling ft_strmmapi with the original string and increment_char function.
    modified_str = ft_strmmapi(original_str, increment_char);

    // Checking if the memory allocation was successful.
    if (modified_str == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Printing the original and modified strings.
    printf("Original string: %s\n", original_str);
    printf("Modified string: %s\n", modified_str);

    // Freeing the allocated memory.
    free(modified_str);

    return 0;
}*/