//HEADER 42

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include minha biblioteca
//TESTADA: OK
//NORMA:

/*size_t ft_strlen(const char *str) //we use a const to indicate that the string shouldn't be modified by the function
{
    size_t i; //size_t is an unsigned integer type. Here we have a size_t variable named i.

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

static char *alloc_substr(size_t n)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (!str)
        return NULL;
    return (str);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;

    if(!s) 
        return NULL;
    if (start > ft_strlen(s))
        len = 0;
    else if (len > ft_strlen(s) - start)
    len = ft_strlen(s) - start;
    substr = alloc_substr(len);
    if (!substr)
        return NULL;
    i = 0;
    while( i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}*/

static size_t   count_words(char const *s, char c) 
{
    size_t  num_of_words; //counts the words
    size_t  i; //iterate the string

    num_of_words = 0;
    i = 0;
    while( s[i] != '\0')
    {
        if (s[i] != c)
        {
            num_of_words++;
            while (s[i] != '\0' && s[i] != c)
                i++;
        }
        else
            i++;
    }
    return num_of_words;
}

static size_t   word_len(char const *s, char c)
{
    size_t  len;

    len = 0;
    while (s[len] != '\0' && s[len] != c)
        len++;
    return (len);
}

static void free_array(size_t i, char   **array)
{
    while(i > 0)
    {
        i--;
        free(array[i]);
    }
    free(array);
}

static char **split(char const *s, char c, char **array, size_t words_count)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (i < words_count)
    {
        while(s[j] != '\0' && s[j] == c) //this my be a prob use: (s[j] && s[j] == c)
            j++;
        array[i] = ft_substr(s, j, word_len(s + j, c));
        if (!array[i])
        {
            free_array(i, array);
            return NULL;
        }
        while (s[j] != '\0'&& s[j] != c)
            j++;
        i++;
    }
    array[i] = NULL;
    return array;
}

char    **ft_split(char const *s, char c)
{
    char    **array_of_str;
    size_t  words;

    if (!s)
        return NULL;
    words = count_words(s, c);
    array_of_str = (char **)malloc(sizeof(char *) * (words + 1));
    if (!array_of_str)
        return NULL;
    array_of_str = split(s, c, array_of_str, words);
    return (array_of_str);
}
/*#include <stdio.h>
#include <stdlib.h>

// Include the declarations of your functions here
// For example: char **ft_split(char const *s, char c);

int main() {
    char const *test_str = "Hello world, this is a test string";
    char delimiter = ' ';
    char **result = ft_split(test_str, delimiter);

    if (result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Original string: \"%s\"\n", test_str);
    printf("Split by '%c':\n", delimiter);

    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]);  // Free each string
    }

    free(result);  // Free the array of strings

    return 0;
}*/