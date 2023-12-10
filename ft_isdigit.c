//HEADER 42

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return 1; //return true if the character is a digit
    }
    return 0;
}