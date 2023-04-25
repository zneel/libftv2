#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void free_split_result(char **result)
{
    for (int i = 0; result[i] != NULL; i++)
    {
        free(result[i]);
    }
    free(result);
}

int test_ft_split(const char *str, char c, const char *expected[])
{
    char **result = ft_split(str, c);
    int i = 0;
    int is_equal = 1;

    while (expected[i] != NULL && result[i] != NULL)
    {
        if (strcmp(expected[i], result[i]) != 0)
        {
            is_equal = 0;
            break;
        }
        i++;
    }

    if (expected[i] != NULL || result[i] != NULL)
    {
        is_equal = 0;
    }

    free_split_result(result);
    return is_equal;
}

int main(void)
{
    int tests_passed = 1;

    const char *test1_str = "This is a test string for ft_split";
    char test1_c = ' ';
    const char *test1_expected[] = {"This", "is", "a", "test", "string", "for", "ft_split", NULL};

    const char *test2_str = "a,b,c,d,e,f";
    char test2_c = ',';
    const char *test2_expected[] = {"a", "b", "c", "d", "e", "f", NULL};

    const char *test3_str = "single";
    char test3_c = ' ';
    const char *test3_expected[] = {"single", NULL};

    if (!test_ft_split(test1_str, test1_c, test1_expected))
    {
        printf("ft_split test1 failed!\n");
        tests_passed = 0;
    }

    if (!test_ft_split(test2_str, test2_c, test2_expected))
    {
        printf("ft_split test2 failed!\n");
        tests_passed = 0;
    }

    if (!test_ft_split(test3_str, test3_c, test3_expected))
    {
        printf("ft_split test3 failed!\n");
        tests_passed = 0;
    }

    if (tests_passed)
    {
        printf("All ft_split tests passed!\n");
    }
    else
    {
        abort();
    }
}

