//HEADER 42

//#include "libft.h"
#include <unistd.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t  i;

    if (s && f)
    {
        i = 0;
        while(*s)
            f(i++, s++);
    }
}
/*#include <stdio.h>

// Function to print each character and its index
void print_char_with_index(unsigned int i, char *c) {
    if (c != NULL) {
        printf("Index %u: %c\n", i, *c);
    }
}

int main() {
    char str[] = "Hello, World!";

    // Apply print_char_with_index to each character of str
    ft_striteri(str, print_char_with_index);

    return 0;
}*/