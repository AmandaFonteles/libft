//HEADER42

//#include <THE LIBRRY>
#include <unistd.h> // necessary to include the NULL.

char    *ft_strchr(const char   *s, int   c) //returns a pointer to the FIRST occurence of the character c in the string s. The s is a const to prevent a change in the string
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        {
            return (char *)&s[i];
        }
        i++;
    }

    if (s[i] == (char)c) //we use this last if to handle the case where c is '\0', since the while loop doesn't enter the first if when s[i] = '\0'
    {
        return (char *)&s[i];
    }

    return NULL;
}

/*#include <stdio.h>
int main() //test printing the string
{
    char *str = "Amanda ma!";
    char *first_M = ft_strchr(str, 'm');

    printf("first_M: %s\n", first_M);

    char *first_z = ft_strchr(str, 'z');
    if (first_z == NULL){
    printf("%s", ft_strchr(str, 'z'));
    }
}*/

/*#include <stdio.h>
#include <string.h>
//test printing the address
//The function you provided
int main() {
    const char *testString = "Hello, World!";
    int testChar = 'W';

    // Using the provided ft_strchr
    char *resultft_strchr = ft_strchr(testString, testChar);
    printf("ft_strchr result: %p\n", (void *)resultft_strchr);

    // Using the standard strchr function
    char *resultStrchr = strchr(testString, testChar);
    printf("strchr result: %p\n", (void *)resultStrchr);

    return 0;
}*/