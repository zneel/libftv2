#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void test_ft_strchr(char const *s, int c, char const *expected)
{
    char *result = ft_strchr(s, c);

    if (result == NULL && expected == NULL)
        printf("PASS: ft_strchr(\"%s\", \'%c\') -> NULL\n", s, c);
    else if (result != NULL && strcmp(result, expected) == 0)
        printf("PASS: ft_strchr(\"%s\", \'%c\') -> \"%s\"\n", s, c, result);
    else
        printf("FAIL: ft_strchr(\"%s\", \'%c\') -> \"%s\" (expected \"%s\")\n", s, c, result, expected);
}


int main(void)
{
    test_ft_strchr("hello", 'e', "ello");
    test_ft_strchr("world", 'w', "world");
    test_ft_strchr("foo", '\0', "");
    test_ft_strchr("", 'a', "");
    test_ft_strchr("test", 't', "test");

    return 0;
}
