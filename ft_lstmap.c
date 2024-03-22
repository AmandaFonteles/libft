//HEADER 42

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *head_new_list;

    if (!lst || !f || !del)
        return (NULL);
    new_list = ft_lstnew(f(lst->content));
    if (!new_list)
        return (NULL);
    head_new_list = new_list;
    lst = lst->next;
    while (lst)
    {
        new_list->next = ft_lstnew(f(lst->content));
        if (!new_list->next)
        {
            ft_lstclear(&head_new_list, del);
            return (NULL);
        }
        new_list = new_list->next;
        lst = lst->next;
    }
    new_list->next = NULL;
    return(head_new_list);
}