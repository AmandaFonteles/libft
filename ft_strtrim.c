//HEADER 42

#include "libft.h"

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