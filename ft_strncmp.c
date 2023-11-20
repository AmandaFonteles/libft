//HEADER 42

#include <unistd.h>
#include <libft> //replace with the real name of the library

int ft_strncmp(const char *s1, const char *s2, size_t n) //use const char * to ensure that the function doesn't modify the input strings
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]); //use unsigned char to handle characters with negativa values (ASCII values above 127)
        }
        i++;
    }
    return (0);
}