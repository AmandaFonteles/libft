//colocar header 42
#include <unistd.h>
#include <libft> // mudr para o nome certo 

void    ft_putendl_fd (char *str, int fd)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(fd, &str[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}