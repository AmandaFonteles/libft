//colocar header 42

#include "libft.h" 

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