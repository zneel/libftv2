#include "libft.h"
#include <assert.h>
#include <bsd/string.h>
#include <string.h>

void debug_output(const char *function, const char *str, char c)
{
    printf("Test failed in %s\n", function);
    printf("Input string: \"%s\"\n", str);
    printf("Character: '%c' (%d)\n", c, c);
}

int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "";

    // Test 1
    if (ft_strrchr(str1, 'o') != strrchr(str1, 'o'))
    {
        debug_output("ft_strrchr", str1, 'o');
        return 1;
    }

    // Test 2
    if (ft_strrchr(str1, '\0') != strrchr(str1, '\0'))
    {
        debug_output("ft_strrchr", str1, '\0');
        return 1;
    }

    // Test 3
    if (ft_strrchr(str2, '\0') != strrchr(str2, '\0'))
    {
        debug_output("ft_strrchr", str2, '\0');
        return 1;
    }

    printf("All tests passed!\n");
    return 0;
}
