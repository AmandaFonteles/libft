//HEADER 42

#include <unistd.h>
#include <stdlib.h>
//#include <minha biblioteca>
//TESTADA: OK
//NORMA:

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
    size_t  total_size;

    total_size = size * count;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // For memcmp

// Include your ft_calloc function here
// ...

// A simple main to test ft_calloc and compare with calloc
int main() {
    size_t num_elements = 5;  // Number of integers to allocate
    size_t size_of_element = sizeof(int);

    // Using ft_calloc
    int *array_ft_calloc = (int *)ft_calloc(num_elements, size_of_element);
    if (array_ft_calloc == NULL) {
        perror("ft_calloc failed");
        return 1;
    }

    // Using standard calloc
    int *array_calloc = (int *)calloc(num_elements, size_of_element);
    if (array_calloc == NULL) {
        perror("calloc failed");
        free(array_ft_calloc);  // Clean up previously allocated memory
        return 1;
    }

    // Compare the two arrays
    if (memcmp(array_ft_calloc, array_calloc, num_elements * size_of_element) == 0) {
        printf("Both arrays are identical.\n");
    } else {
        printf("Arrays differ.\n");
    }

    // Optionally, print the values from the arrays
    for (size_t i = 0; i < num_elements; ++i) {
        printf("ft_calloc array[%zu] = %d, calloc array[%zu] = %d\n", 
                i, array_ft_calloc[i], i, array_calloc[i]);
    }

    // Free the allocated memory
    free(array_ft_calloc);
    free(array_calloc);

    return 0;
}*/