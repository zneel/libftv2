#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "libft.h"

void test_ft_itoa(int input, const char *expected)
{
    char *actual = ft_itoa(input);

    if (strcmp(expected, actual) == 0)
        printf("PASS: input \"%d\", expected %s, got %s\n", input, expected, actual);
    else 
    {
        printf("FAIL: input \"%d\", expected %s, got %s\n", input, expected, actual);
        abort();
    }
    free(actual);
}

int main(void)
{
    test_ft_itoa(2, "2");
    test_ft_itoa(-42, "-42");
    test_ft_itoa(42, "42");
    test_ft_itoa(-42,  "-42");
    test_ft_itoa(2147483647, "2147483647");
    test_ft_itoa(-2147483648,"-2147483648");
    test_ft_itoa(0, "0");

    return 0;
}
