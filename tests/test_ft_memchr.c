#include "libft.h"
#include <string.h>
#include <stdio.h>

void debug_output(const char *function, const int *tab, int c, size_t size, const void *expected, const void *result)
{
    printf("Test failed in %s\n", function);
    printf("Input array: {");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("}\n");
    printf("Character: '%d'\n", c);
    printf("Expected: %p\n", expected);
    printf("Result: %p\n", result);
}

int main(void)
{
    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    void *expected, *result;

    // Test 1
    expected = memchr(tab, 49, 7);
    result = ft_memchr(tab, 49, 7);
    if (result != expected)
    {
        debug_output("ft_memchr", tab, 49, 7, expected, result);
        return 1;
    }

    // Test 2
    expected = memchr(tab, -1, 7);
    result = ft_memchr(tab, -1, 7);
    if (result != expected)
    {
        debug_output("ft_memchr", tab, -1, 7, expected, result);
        return 1;
    }

    // Test 3
    expected = memchr(tab, 0, 7);
    result = ft_memchr(tab, 0, 7);
    if (result != expected)
    {
        debug_output("ft_memchr", tab, 0, 7, expected, result);
        return 1;
    }

    printf("All tests passed!\n");
    return 0;
}
