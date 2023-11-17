//HEADER 42

#include <unistd.h>
#include <LIBFT> // replace with your library

int ft_isprint (int c)
{
    if (c >= 32 && c <= 126)
    {
        return 1;
    }
}