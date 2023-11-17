//HEADER 42

#include <stdio.h> //IDK if is necessary
#include <LIBFT> //replace with your own library

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') 
        || (c >= 'A' && c <= 'Z') 
        || (c >= '0' && c <= '9'))
    {
        return 1;
    }
}