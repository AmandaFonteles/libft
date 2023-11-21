//HEADER 42

#include <unistd.h> //idk if we need this library here
#include <LIBFT>  //replace with the name of the library I created

int ft_toupper (int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    else
    {
        return c;
    }
}