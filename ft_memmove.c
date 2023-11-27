//HEADER 42

#include <unistd.h> //I think the library is necessary just when write or malloc will be used.
//#include <libft> replace with the name of yout library

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *d;
    const unsigned char *s;

    d = (unsigned char*)dest;
    s = (const unsigned char*)src;
    i = 0;
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
        return (dest);
    }
    else
    {
        while (n > 0)
        {
            n--;
            d[i] = s[i];
        }
        return (dest);
    }
}