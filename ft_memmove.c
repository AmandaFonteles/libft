//HEADER 42

#include <unistd.h> 
//#include "libft.h"
//TESTADA: TLVZ FUNCIONE, mas deu um probleminha no teste
//NORMA:

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}
/*#include <stdio.h>
#include <string.h>

void *standard_memmove(void *dest, const void *src, size_t n)
{
    return memmove(dest, src, n);
}
int main() {
    char src[] = "Example string";
    ft_memmove(src + 5, src, 10); // Using your ft_memmove
    printf("ft_memmove result: %s\n", src);

    char src2[] = "Example string";
    standard_memmove(src2 + 5, src2, 10); // Using standard memmove
    printf("standard memmove result: %s\n", src2);

    return 0;
}*/