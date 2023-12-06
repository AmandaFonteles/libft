//HEADER 42

//#include <my lib>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strtrim(char const  *s1, char const *set)
{
    size_t	i;
    size_t  j;

	if (!s1 || !set)
		return (0);

    j = 0;
	while (s1[j] && ft_strchr(set, s1[j]))
		j++;
	i = ft_strlen(s1 + j);
	while (i > 0 && ft_strchr(set, s1[j + i - 1]))
		i--;
	return (ft_substr(s1, j, i));
}

/*int main() {
    char *result;

    // Test 1: Normal case
    result = ft_strtrim("Hello, World!", "H!");
    printf("Test 1: \"%s\"\n", result);
    free(result);

    // Test 2: Trim all characters
    result = ft_strtrim("xxxxx", "x");
    printf("Test 2: \"%s\"\n", result);
    free(result);

    // Test 3: No characters to trim
    result = ft_strtrim("Hello, World!", "z");
    printf("Test 3: \"%s\"\n", result);
    free(result);

    // Test 4: Empty string
    result = ft_strtrim("", "abc");
    printf("Test 4: \"%s\"\n", result);
    free(result);

    // Test 5: NULL string
    result = ft_strtrim(NULL, "abc");
    printf("Test 5: %s\n", result ? result : "NULL");

    // Test 6: NULL set
    result = ft_strtrim("Hello, World!", NULL);
    printf("Test 6: %s\n", result ? result : "NULL");

    // Test 7: Trim spaces
    result = ft_strtrim("   Hello, World!   ", " ");
    printf("Test 7: \"%s\"\n", result);
    free(result);

    return 0;
}*/