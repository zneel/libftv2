#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "libft.h"

void test_ft_strdup(const char *original)
{
    char *original_strdup = strdup(original);
    char *mine = ft_strdup(original);
    int res = 0;

    if (strcmp(original_strdup, mine) == 0)
    {
        printf("PASS: ft_strdup(\"%s\") = \"%s\"\n", original, mine);
        res = 1;
    }
    else
    {
        printf("FAIL: ft_strdup(\"%s\") = \"%s\"\n (expected \"%s\")\n", original, mine, original_strdup);
        res = 0;
    }
    assert(res == 1);
    free(original_strdup);
    free(mine);
}

int main(void)
{
    test_ft_strdup("Hello, world");
    test_ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit.");
    test_ft_strdup("");
    test_ft_strdup("1234567890");
    test_ft_strdup("\n\t\v\f\r");
    test_ft_strdup("This is a test.");
    return 0;
}
