//HEADER 42

#include <unistd.h>
#include <stdlib.h>
//#include <MINHA BIBLIOTECA>

//TESTADA: OK
//NORMA:
int ft_atoi(const char  *str)
{
	int neg;
	int i;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}

/*#include <stdio.h>
#include <stdlib.h>  // For the standard atoi function

int ft_atoi(const char *str);  // Assuming your ft_atoi is defined elsewhere

int main() {
    char *test_strs[] = {
        "   -123",      // Leading spaces with a negative number
        "42",           // Simple positive number
        "+0",           // Plus sign with zero
        "   +456",      // Leading spaces with a positive number
        "-2147483648",  // Integer minimum
        "2147483647",   // Integer maximum
        "not a number", // Non-numeric string
        "9876543210",   // Larger than int max, potential overflow
        "-9999999999"   // Smaller than int min, potential underflow
    };

    int num_tests = sizeof(test_strs) / sizeof(test_strs[0]);

    for (int i = 0; i < num_tests; i++) {
        int std_atoi_result = atoi(test_strs[i]);
        int ft_atoi_result = ft_atoi(test_strs[i]);
        printf("Test %d - String: '%s'\n", i + 1, test_strs[i]);
        printf("Standard atoi: %d\n", std_atoi_result);
        printf("ft_atoi: %d\n\n", ft_atoi_result);
    }

    return 0;
}*/
