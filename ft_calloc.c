//HEADER 42

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
    size_t  total_size;

    total_size = size * count;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, total_size);
	return (ptr);
}