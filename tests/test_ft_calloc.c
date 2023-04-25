#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    size_t num = 10;
    size_t size = sizeof(int);

    int *arr1 = (int *)ft_calloc(num, size);
    int *arr2 = (int *)calloc(num, size);

    if (arr1 == NULL || arr2 == NULL)
    {
        printf("ft_calloc or calloc failed to allocate memory!\n");
        abort();
    }

    if (memcmp(arr1, arr2, num * size) == 0)
    {
        printf("ft_calloc test passed!\n");
    }
    else
    {
        printf("ft_calloc test failed!\n");
        abort();
    }

    free(arr1);
    free(arr2);
}
