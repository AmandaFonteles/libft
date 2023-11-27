//HEADER 42

//#include <unistd.h> - PRECISA?
//#include <libft> - mudar p a biblioteca certa

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    //we need to calculate the destinationlenght + the sourcelength (using while dst[i] != '\0' and the same for src[j]). That'll be the return value.
    //If the destinationlenght is already iqual or bigger than dstsize, return destinationlenght + sourcelenght
    //use while loop beginning from  i = destinationlenght, while i < destinationlenght + the sourcelength || i < dstsize(buffersize) - 1 copy src to dst
    //put a null terminator at destinationlenght + the source length + 1.
    size_t  i; //destinationlen
    size_t  j; //sourcelen
    size_t  k; //counter for source string

    i = 0;
    j = 0;
    k = 0;
    while(dst[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0')
    {
        j++;
    }
    if (i >= dstsize) // dstsize = buffersize
    {
        return(i + j);
    }
    else
    {
        while((i + k) < (dstsize - 1) && src[k] != '\0')
        {
            dst[i + k] = src[k];
            k++;
        }
        dst[i + k] = '\0';
        return (i + j);
    }
}