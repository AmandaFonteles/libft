//HEADER 42

#include <unistd.h>
//#include LIBFT

void    *ft_memchr(const void  *s, int c, size_t n)
{
    const unsigned char *str; //Declare a pointer to unsigned char to treat the input memory as bytes
    size_t  i;

    str = (const unsigned char*)s; //Cast the input pointer to a pointer to unsigned char for byte-wise comparison
    i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
        {
            return (&str[i]); //Return a pointer to the first occurrence of the character
        }
        i++;
    } 
// If the character is not found within the specified number of bytes, return NULL
    return NULL;
}