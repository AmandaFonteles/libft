//HEADER 42

#include <unistd.h> 
//#include <LIBFT> //replace with your own library
//TESTADA: OK
//NORMA:

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') 
        || (c >= 'A' && c <= 'Z') 
        || (c >= '0' && c <= '9'))
    {
        return 1;
    }
    return 0;
}
/*#include <stdio.h>
#include <ctype.h>

int main()
{
    // Test characters
    char test_chars[] = {'a', 'Z', '5', '!', '\n', '0', '9', 'k', 'P', '/'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Char | ft_isalnum | isalnum\n");
    printf("-----|------------|--------\n");

    // Test each character
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        printf("  %c  |      %d     |    %d   \n", c, ft_isalnum(c), isalnum(c));
    }

    return 0;
}*/