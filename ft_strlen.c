//COLOCAR HEADER 42

#include <unistd.h>
#include <libft> //MUDAR
//TESTADA: OK
//NORMA:

size_t ft_strlen(const char *str) //we use a const to indicate that the string shouldn't be modified by the function
{
    size_t i; //size_t is an unsigned integer type. Here we have a size_t variable named i.

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}