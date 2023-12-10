//colocar header 42

#include <unistd.h>
//#include <libft> //colocar o nome certo dps
//TESTADA: OK
//NORMA:

void    ft_putnbr_fd(int n, int fd)
{
    char c;

    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    else
    {
        if (n < 0)
        {
            write (fd, "-", 1);
            n = -n;
        }
        if (n < 10)
        {
            c = n + '0';
            write (fd, &c, 1);
        }
        else
        {
            ft_putnbr_fd (n / 10, fd);
            c = (n % 10) + '0';
            write(fd, &c, 1);
        }
    }
}
/* Include or define the ft_putnbr_fd function here

int main() {
    // Test with a positive number
    ft_putnbr_fd(12345, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    // Test with a negative number
    ft_putnbr_fd(-54321, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    // Test with zero
    ft_putnbr_fd(0, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    // Test with the smallest 32-bit integer
    ft_putnbr_fd(-2147483648, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    return 0;
}*/