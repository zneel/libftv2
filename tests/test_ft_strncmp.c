#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void abort_on_failure(int success, const char *test_name)
{
    if (!success)
    {
        printf("Test '%s' failed!\n", test_name);
        abort();
    }
}

int main(void)
{
    int sz;
    const char *s1 = "Hello, world!";
    const char *s2 = "Hello, world!";
    sz = 13;
    int res1 = ft_strncmp(s1, s2, sz);
    int res2 = strncmp(s1, s2, sz);
    printf("test1 (ft_strncmp) = %d\n", res1);
    printf("test1 (strncmp) = %d\n", res2);
    abort_on_failure(((res1 == 0 && res2 == 0) || (res1 < 0 && res2 < 0) || (res1 > 0 && res2 > 0)), "test1");

    const char *s3 = "Hello, world!";
    const char *s4 = "Hello, there!";
    sz = 7;
    int res3 = ft_strncmp(s3, s4, sz);
    int res4 = strncmp(s3, s4, sz);
    printf("test2 (ft_strncmp) = %d\n", res3);
    printf("test2 (strncmp) = %d\n", res4);
    abort_on_failure(((res3 == 0 && res4 == 0) || (res3 < 0 && res4 < 0) || (res3 > 0 && res4 > 0)), "test2");

    const char *s5 = "abcde";
    const char *s6 = "abc";
    sz = 3;
    int res5 = ft_strncmp(s5, s6, sz);
    int res6 = strncmp(s5, s6, sz);
    printf("test3 (ft_strncmp) = %d\n", res5);
    printf("test3 (strncmp) = %d\n", res6);
    abort_on_failure(((res5 == 0 && res6 == 0) || (res5 < 0 && res6 < 0) || (res5 > 0 && res6 > 0)), "test3");

    const char *s7 = "abc";
    const char *s8 = "abcdef";
    sz = 3;
    int res7 = ft_strncmp(s7, s8, sz);
    int res8 = strncmp(s7, s8, sz);
    printf("test4 (ft_strncmp) = %d\n", res7);
    printf("test4 (strncmp) = %d\n", res8);
    abort_on_failure(((res7 == 0 && res8 == 0) || (res7 < 0 && res8 < 0) || (res7 > 0 && res8 > 0)), "test4");

    const char s9[] = "\x80";
    const char s10[] = "\x80";
    sz = 2;
    int res9 = ft_strncmp(s9, s10, sz);
    int res10 = strncmp(s9, s10, sz);
    printf("test5 (ft_strncmp) = %d\n", res9);
    printf("test5 (strncmp) = %d\n", res10);
    abort_on_failure(((res9 == 0 && res10 == 0) || (res9 < 0 && res10 < 0) || (res9 > 0 && res10 > 0)), "test5");

    const char s11[] = "\x80";
    const char s12[] = "\xff";
    sz = 3;
    int res11 = ft_strncmp(s11, s12, sz);
    int res12 = strncmp(s11, s12, sz);
    printf("test6 (ft_strncmp) = %d\n", res11);
    printf("test6 (strncmp) = %d\n", res12);
    abort_on_failure(((res11 == 0 && res12 == 0) || (res11 < 0 && res12 < 0) || (res11 > 0 && res12 > 0)), "test6");

    const char s13[] = "test";
    const char s14[] = "";
    sz = 0;
    int res13 = ft_strncmp(s13, s14, sz);
    int res14 = strncmp(s13, s14, sz);
    printf("test7 (ft_strncmp) = %d\n", res13);
    printf("test7 (strncmp) = %d\n", res14);
    abort_on_failure(((res13 == 0 && res14 == 0) || (res13 < 0 && res14 < 0) || (res13 > 0 && res14 > 0)), "test7");

    printf("All tests passed!\n");

    return 0;
}
