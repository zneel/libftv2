#include <assert.h>
#include <string.h>
#include "libft.h"

void test_ft_strlen_empty(void)
{
    const char *s = "";
    assert(ft_strlen(s) == strlen(s));
}

void test_ft_strlen_single_char(void)
{
    const char *s = "A";
    assert(ft_strlen(s) == strlen(s));
}

void test_ft_strlen_short_string(void)
{
    const char *s = "Hello";
    assert(ft_strlen(s) == strlen(s));
}

void test_ft_strlen_long_string(void)
{
    const char *s = "OKOKOKOKO OKOKOKOKOK OKOKOKOK kkkkOK";
    assert(ft_strlen(s) == strlen(s));
}

int main(void)
{
    test_ft_strlen_empty();
    test_ft_strlen_single_char();
    test_ft_strlen_short_string();
    test_ft_strlen_long_string();
    return (0);
}
