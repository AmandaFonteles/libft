//HEADER 42

#include <unistd.h>
//#include <LIBFT> // replace with your library
//TESTADA: OK
//NORMA:

int ft_isprint (int c)
{
    if (c >= 32 && c <= 126)
    {
        return 1;
    }
    return 0;
}
/*#include <stdio.h>
#include <ctype.h>
int main() {
    // Test with a range of characters
    for (int i = 0; i < 128; i++) {
        printf("Character: %c (ASCII: %d) -> ft_isprint: %d, isprint: %d\n", 
               i, i, ft_isprint(i), isprint(i));
    }

    return 0;
}*/