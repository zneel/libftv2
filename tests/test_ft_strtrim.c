#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void test_ft_strtrim(char const *s1, char const *set, char const *expected)
{
    char *result = ft_strtrim(s1, set);
    int is_equal = (strcmp(result, expected) == 0);

    if (is_equal)
        printf("PASS: ft_strtrim(\"%s\", \"%s\") -> \"%s\"\n", s1, set, result);
    else
        printf("FAIL: ft_strtrim(\"%s\", \"%s\") -> \"%s\" (expected \"%s\")\n", s1, set, result, expected);

    free(result);
}

int main(void)
{
    test_ft_strtrim("  \t  hello world!   \t  ", " \t", "hello world!");
    test_ft_strtrim("  \t  \t\t\t   ", " \t", "");
    test_ft_strtrim("", "", "");
    test_ft_strtrim("hello", "xyz", "hello");
    test_ft_strtrim("  \t  hello", " \t", "hello");
    test_ft_strtrim("hello  \t  ", " \t", "hello");

    return 0;
}
