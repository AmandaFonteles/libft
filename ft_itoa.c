//HEADER 42

#include <stdio.h>
#include <stdlib.h>
//#include MINHA BIBLI
//TESTADA: OK
//NORMA:

static int  str_len(int nbr)
{
    int len;

    len = 0;
    if (nbr < 1)
        len++;
    while(nbr)
    {
        nbr /= 10;
        len++;
    }
    return (len);
}

static long neg_nbr(long n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

static char *create_str(size_t  n)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if(!str)
        return NULL;
    return (str);
}

char    *ft_itoa(int n)
{
    unsigned int    nbr;
    int sign;
    int len;
    char    *str;

    sign = 0;
    if (n < 0)
        sign = 1;
    len = str_len(n);
    str = create_str(len);
    if (!str)
        return NULL;
    str[len] = '\0';
    nbr = neg_nbr(n);
    while(len--)
    {
        str[len] = '0' + nbr % 10;
        nbr/= 10;
    }
    if (sign)
        str[0] = '-';
    return (str);
}
/*#include <stdio.h>
#include <limits.h>

int main() {
    int numbers[] = {123, -123, 0, INT_MAX, INT_MIN};
    char *converted_str;

    for (int i = 0; i < 5; i++) {
        converted_str = ft_itoa(numbers[i]);
        if (converted_str == NULL) {
            printf("Memory allocation failed for %d\n", numbers[i]);
            continue;
        }

        printf("Original number: %d, Converted string: %s\n", numbers[i], converted_str);
        free(converted_str);  // Free the memory allocated by ft_itoa
    }

    return 0;
}*/