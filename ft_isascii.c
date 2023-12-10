//HEADER 42

#include <unistd.h> //IDK if its necessary
//#include <LIBFT> //replace with your library
//TESTADA: OK
//NORMA:

int ft_isascii (int c)
{
    if (c >= 0 && c <= 127)
    {
        return 1;
    }
    return 0;
}
/*#include <ctype.h>
#include <stdio.h>
int main() {
    int c;

    // Prompt user to enter a character
    printf("Enter a character: ");
    c = getchar();  // Read a character

    // Check and display the result of the standard isascii function
    printf("Standard isascii: %d\n", isascii(c));

    // Check and display the result of your custom ft_isascii function
    printf("Custom ft_isascii: %d\n", ft_isascii(c));

    return 0;
}*/