#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "libft.h"

void test_ft_atoi(const char *input, int expected)
{
    int actual = ft_atoi(input);

    if (actual != expected) {
        printf("Test failed: input \"%s\", expected %d, got %d\n", input, expected, actual);
        assert(actual == expected);
    }
}

int main(void)
{
    test_ft_atoi("42", 42);
    test_ft_atoi("-42", -42);
    test_ft_atoi("  42", 42);
    test_ft_atoi("  -42", -42);
    test_ft_atoi("      +42", 42);
    test_ft_atoi("2147483647", 2147483647);
    test_ft_atoi("-2147483648", -2147483648);
    test_ft_atoi("0", 0);
    test_ft_atoi("a42", 0);
    test_ft_atoi("      - 42", 0);
    test_ft_atoi("\010 9", 0);

    return 0;
}
