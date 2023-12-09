//HEADER 42

#include <unistd.h>
//#include MINHA BIBLIOTECA

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  l_len;
    char    *b_str;

    b_str = (char*)big; //b_str is a non-const pointer to big, allowing me return a non-const pointer from the function
    l_len = ft_strlen(little);
    i = 0;
    if (*little == 0)
        return (b_str);
    while((i < len) && (b_str[i] != '\0'))
    {
        j = 0;
        while((little[j] == b_str[i + j]) && (i + j < len)
            && (b_str[i + j] != '\0') && (little[j] != '\0'))
            j++;
        if (j == l_len)
            return (b_str + i);
        i++;
    }
    return 0;
}