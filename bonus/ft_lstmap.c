//HEADER 42

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (!lst || !f || !del)
        return (NULL);
    
}