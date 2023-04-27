#include "libft.h"
#include <assert.h>
#include <bsd/string.h>
#include <string.h>


int main(void)
{
    char str1[] = "lorem ipsum dolor sit amet";
    char str2[] = "lorem ipsum dolor sit lorem ipsum dolor";
    char str3[] = "";

    // Test 1
    printf("Test 1\n");
    printf("Expected: %s\n", strnstr(str1, "lorem", 15));
    printf("Actual:   %s\n", ft_strnstr(str1, "lorem", 15));
    assert(ft_strnstr(str1, "lorem", 15) == strnstr(str1, "lorem", 15));

    // Test 2
    printf("\nTest 2\n");
    printf("Expected: %s\n", strnstr(str1, "ipsum", 15));
    printf("Actual:   %s\n", ft_strnstr(str1, "ipsum", 15));
    assert(ft_strnstr(str1, "ipsum", 15) == strnstr(str1, "ipsum", 15));

    // Test 3
    printf("\nTest 3\n");
    printf("Expected: %s\n", strnstr(str2, "ipsum", 35));
    printf("Actual:   %s\n", ft_strnstr(str2, "ipsum", 35));
    assert(ft_strnstr(str2, "ipsum", 35) == strnstr(str2, "ipsum", 35));

    // Test 4
    printf("\nTest 4\n");
    printf("Expected: %s\n", strnstr(str1, "dol", 30));
    printf("Actual:   %s\n", ft_strnstr(str1, "dol", 30));
    assert(ft_strnstr(str1, "dol", 30) == strnstr(str1, "dol", 30));

    // Test 5
    printf("\nTest 5\n");
    printf("Expected: %s\n", strnstr(str1, "dolor", 0));
    printf("Actual:   %s\n", ft_strnstr(str1, "dolor", 0));
    assert(ft_strnstr(str1, "dolor", 0) == strnstr(str1, "dolor", 0));

    // Test 6
    printf("\nTest 6\n");
    printf("Expected: %s\n", strnstr(str1, "not_present", 15));
    printf("Actual:   %s\n", ft_strnstr(str1, "not_present", 15));
    assert(ft_strnstr(str1, "not_present", 15) == strnstr(str1, "not_present", 15));

    // Test 7
    printf("\nTest 7\n");
    printf("Expected: %s\n", strnstr(str3, "", 0));
    printf("Actual:   %s\n", ft_strnstr(str3, "", 0));
    assert(ft_strnstr(str3, "", 0) == strnstr(str3, "", 0));

    return (0);
}
