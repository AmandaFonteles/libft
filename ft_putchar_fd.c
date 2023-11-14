//COLOCAR HEADER 42
#include <unistd.h>
#include <libft> //modificar p colocar a livraria certa

void    ft_putchar_fd (char c, int fd)
{
    write(fd, &c, 1);
}