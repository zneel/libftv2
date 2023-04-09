#include <assert.h>
#include <stdio.h>
#include <ctype.h>

#include "libft.h"

void test_char_function(int (*func)(int), int (*ft_func)(int), const char *func_name) {
    for (int i = -128; i <= 127; i++) {
        int expected = func(i);
        int actual = ft_func(i);

        if (actual != expected) {
            fprintf(stderr, "Test failed in %s: input %d, expected %d, got %d\n", func_name, i, expected, actual);
            assert(actual == expected);
        }
    }
}

int main(void) {
    test_char_function(isalnum, ft_isalnum, "ft_isalnum");
    test_char_function(isalpha, ft_isalpha, "ft_isalpha");
    test_char_function(isascii, ft_isascii, "ft_isascii");
    test_char_function(isdigit, ft_isdigit, "ft_isdigit");
    test_char_function(isprint, ft_isprint, "ft_isprint");
    test_char_function(tolower, ft_tolower, "ft_tolower");
    test_char_function(toupper, ft_toupper, "ft_toupper");

    return 0;
}
