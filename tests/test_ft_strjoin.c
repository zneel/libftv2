#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void test_ft_strjoin(char const *s1, char const *s2, char const *expected)
{
    char *result = ft_strjoin(s1, s2);
    if (result == NULL && expected != NULL)
    {
        printf("ft_strjoin test failed: expected \"%s\" but got NULL\n", expected);
        abort();
    }
    else if (expected == NULL && result != NULL)
    {
        printf("ft_strjoin test failed: expected NULL but got \"%s\"\n", result);
        free(result);
        abort();
    }
    else if (strcmp(result, expected) != 0)
    {
        printf("ft_strjoin test failed: expected \"%s\" but got \"%s\"\n", expected, result);
        free(result);
        abort();
    }
    free(result);
}

int main(void)
{
    test_ft_strjoin("hello", "world", "helloworld");
    test_ft_strjoin("hello", "", "hello");
    test_ft_strjoin("", "world", "world");
    test_ft_strjoin("", "", "");
    test_ft_strjoin("abcd", "efghi", "abcdefghi");

    printf("All ft_strjoin tests passed!\n");
    return 0;
}
