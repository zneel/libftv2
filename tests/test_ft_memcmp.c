#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main()
{
    int tests_passed = 1;

    const char *test1_s1 = "This is a test string for ft_memcmp";
    const char *test1_s2 = "This is a test string for ft_memcmp";
    size_t test1_n = strlen(test1_s1);
    int test1_expected = 0;

    const char *test2_s1 = "This is a test string for ft_memcmp";
    const char *test2_s2 = "This is another test string";
    size_t test2_n = 8;
    int test2_expected = 0;

    const char *test3_s1 = "This is a test string for ft_memcmp";
    const char *test3_s2 = "This is another test string";
    size_t test3_n = 4;
    int test3_expected = 0;

    const char *test4_s1 = "This is a test string for ft_memcmp";
    const char *test4_s2 = "This is another test string";
    size_t test4_n = 50;
    int test4_expected = -78;

    const char *test5_s1 = "This is a test string for ft_memcmp";
    const char *test5_s2 = "This is another test string";
    size_t test5_n = 0;
    int test5_expected = 0;

    if (ft_memcmp(test1_s1, test1_s2, test1_n) != test1_expected)
    {
        printf("ft_memcmp test1 failed!\n");
        tests_passed = 0;
    }

    if (ft_memcmp(test2_s1, test2_s2, test2_n) != test2_expected)
    {
        printf("ft_memcmp test2 failed!\n");
        tests_passed = 0;
    }

    if (ft_memcmp(test3_s1, test3_s2, test3_n) != test3_expected)
    {
        printf("ft_memcmp test3 failed!\n");
        tests_passed = 0;
    }

    int result = ft_memcmp(test4_s1, test4_s2, test4_n);
    if (result != test4_expected)
    {
        printf("ft_memcmp test4 failed!\n");
        printf("Result: %d\nExpected: %d\n", result, test4_expected);
        tests_passed = 0;
    }

    if (ft_memcmp(test5_s1, test5_s2, test5_n) != test5_expected)
    {
        printf("ft_memcmp test5 failed!\n");
        tests_passed = 0;
    }

    if (tests_passed)
        printf("All ft_memcmp tests passed!\n");
    else
        abort();

    return 0;
}
