#include <assert.h>
#include <stdio.h>
#include <ctype.h>

#include "libft.h"

void test_case(char c)
{
    int original_tolower = tolower(c);
    int original_toupper = toupper(c);
    int custom_tolower = ft_tolower(c);
    int custom_toupper = ft_toupper(c);

    if (original_tolower == custom_tolower && original_toupper == custom_toupper)
    {
        printf("PASS: tolower('%c') = '%c', toupper('%c') = '%c'\n", c, custom_tolower, c, custom_toupper);
    }
    else
    {
        printf("FAIL: tolower('%c') = '%c' (expected '%c'), toupper('%c') = '%c' (expected '%c')\n", c, custom_tolower, original_tolower, c, custom_toupper, original_toupper);
    }
}

int main(void)
{
    for (char c = 'A'; c <= 'Z'; c++)
        test_case(c);

    for (char c = 'a'; c <= 'z'; c++)
        test_case(c);

    for (char c = '0'; c <= '9'; c++)
        test_case(c);
    test_case('!');
    test_case('@');
    test_case('#');
    test_case('$');
    test_case('%');
    test_case('^');
    test_case('&');
    test_case('*');
    test_case('(');
    test_case(')');
    test_case('-');
    test_case('=');
    test_case('+');

    return 0;
}
