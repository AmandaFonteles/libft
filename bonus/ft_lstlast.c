//HEADER 42

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *last;

    if(!lst)
        return (NULL);
    last = lst;
    while(lst->next != NULL)
        last = lst->next;
    return (last); 
}