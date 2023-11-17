//HEADER 42

#include <unistd.h> //IDK if its necessary
#include <LIBFT> //replace with your library

int ft_isascii (int c)
{
    if (c >= 0 && c <= 127)
    {
        return 1;
    }
}