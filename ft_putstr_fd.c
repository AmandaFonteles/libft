//colocar header 42
#include <unistd.h>
#include <libft> //trocar pela livraria certa ao final

void ft_putstr_fd (char *str, int fd)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(fd, &str[i], 1);
        i++;
    }
}