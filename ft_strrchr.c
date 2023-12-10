//HEDER 42

#include "libft.h"

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