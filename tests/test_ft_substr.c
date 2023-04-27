#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void test_ft_substr(char *s, unsigned int start, size_t len, char *expected)
{
    char *result = ft_substr(s, start, len);

    if (strcmp(result, expected) != 0)
    {
        printf("ft_substr test failed:\n");
        printf("s = \"%s\"\n", s);
        printf("start = %u\n", start);
        printf("len = %lu\n", len);
        printf("expected = \"%s\"\n", expected);
        printf("result = \"%s\"\n", result);
        free(result);
        abort();
    }

    free(result);
}

int main(void)
{
    test_ft_substr("Hello, world!", 0, 5, "Hello");
    test_ft_substr("Hello, world!", 7, 6, "world!");
    test_ft_substr("Hello, world!", 7, 20, "world!");
    test_ft_substr("Hello, world!", 0, 20, "Hello, world!");
    test_ft_substr("Hello, world!", 13, 20, "");

    printf("All ft_substr tests passed!\n");
    return 0;
}
