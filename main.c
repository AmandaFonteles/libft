//COLOCAR HEADER DA 42
#include <unistd.h>
#include <libft> //replace with the actual libft header file

int main(void)
{
    //test ft_putchar_fd
    ft_putchar_fd ('A', 1); //print A to 1 = standart output (terminal)

    //test ft_putstr_fd
    ft_putstr_fd ("Hey, 42!", 1); //print the string to 1

    //test ft_putendl_fd
    ft_putendl_fd ("Hey, 42!", 1); //print the string and new line to 1

    //test ft_putnbr_fd
    ft_putnbr_fd (42, 1); //print the number to 1
    write(1, "\n", 1); // print a new line for clarity

    return 0;
}