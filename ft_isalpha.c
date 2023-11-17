//HEADER 42

#include <unistd.io>
#include <LIBFT> //replace with your library

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1; //return true is the character is alphabetic
    }
}