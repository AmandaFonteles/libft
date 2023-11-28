//HEDER 42

#include <unistd.h>
//#incude LIBFT -replace with the name of your library

char    *ft_strchr(const char   *s, int   c) //returns a pointer to the last occurence of the character c in the string s. The s is a const to prevent a change in the string
{
	char	*str;
	int		i;

	str = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			str = &((char*)s)[i]; //to send the adress and not just the char, we need to use & (since is a pointer)
		i++;
	}
	if (c == '\0')
		str = &((char*)s)[i];
	return (str);
}
/*#include <stdio.h>
int main() //test printing the string
{
    char *str = "This is MY string!";
    char *first_M = ft_strchr(str, 'i');

    printf("first_M: %s\n", first_M);

    char *first_z = ft_strchr(str, 'z');
    if (first_z == NULL){
    printf("%s", ft_strchr(str, 'z'));
    }
}*/

/*#include <stdio.h>
#include <string.h>
//test printing the address
//The function you provided
int main() {
    const char *testString = "Hello, World!";
    int testChar = 'W';

    // Using the provided ft_strchr
    char *resultft_strchr = ft_strchr(testString, testChar);
    printf("ft_strchr result: %p\n", (void *)resultft_strchr);

    // Using the standard strchr function
    char *resultStrchr = strchr(testString, testChar);
    printf("strchr result: %p\n", (void *)resultStrchr);

    return 0;
}*/