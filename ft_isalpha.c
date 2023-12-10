//HEADER 42

#include <unistd.h>
//#include <LIBFT> //replace with your library
//TESTADA: OK
//NORMA:

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1; //return true is the character is alphabetic
    }
    return 0;
}
/*#include <stdio.h>
#include <ctype.h>

int main() {
    char test_chars[] = "aZ0@";
    int i;

    // Test each character in the array
    for (i = 0; test_chars[i] != '\0'; i++) {
        char c = test_chars[i];
        printf("Character: %c\n", c);
        printf("ft_isalpha: %d\n", ft_isalpha(c));
        printf("isalpha: %d\n", isalpha(c));
        printf("\n");
    }

    return 0;
}*/