//colocar header 42

#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    char c;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
    }
    else
    {
        if (n < 0)
        {

        }
        else if (0 >= n < 10)
        {

        }
        else
        {

        }
    }
}