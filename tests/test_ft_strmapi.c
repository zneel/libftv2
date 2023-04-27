#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char add_one(unsigned int index, char c)
{
    (void) index;
    return c + 1;
}

char to_upper(unsigned int index, char c)
{
    (void) index;
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    else
        return c;
}

void test_ft_strmapi(char *str, char *(*f)(const char *, char (*f)(unsigned int, char)))
{
    char *result = f(str, add_one);

    if (result == NULL)
    {
        printf("Test failed: result is NULL\n");
        abort();
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (result[i] != str[i] + 1)
        {
            printf("Test failed: result[%d] should be %c, got %c\n", i, str[i] + 1, result[i]);
            abort();
        }
    }

    free(result);

    char *result2 = f(str, to_upper);

    if (result2 == NULL)
    {
        printf("Test failed: result2 is NULL\n");
        abort();
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (result2[i] != to_upper(0, str[i]))
        {
            printf("Test failed: result2[%d] should be %c, got %c\n", i, to_upper(0, str[i]), result2[i]);
            abort();
        }
    }

    free(result2);

    printf("All tests passed!\n");
}

int main()
{
    char *str = "Hello World!";

    test_ft_strmapi(str, ft_strmapi);

    return 0;
}
