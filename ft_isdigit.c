//HEADER 42

#include <unistd.h>
//#include <LIBFT> //replace with your library
//TESTADA: OK
//NORMA:

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return 1; //return true if the character is a digit
    }
    return 0;
}
/*#include <stdio.h>
#include <ctype.h>
int main() {
    char test_chars[] = {'a', '5', '0', '9', 'Z', '4', '/', '8'};
    int num_test_chars = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Char | ft_isdigit | isdigit\n");
    printf("---------------------------\n");

    for (int i = 0; i < num_test_chars; ++i) {
        char c = test_chars[i];
        printf("  %c  |     %d      |    %d   \n", c, ft_isdigit(c), isdigit(c));
    }

    return 0;
}*/