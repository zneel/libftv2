#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char str1[50] = "This is a test string for memset";
    char str2[50] = "This is a test string for memset";

    ft_memset(str1 + 11, '-', 6);
    memset(str2 + 11, '-', 6);

    if (memcmp(str1, str2, sizeof(str1)) == 0)
    {
        printf("ft_memset test passed!\n");
        return 0;
    }
    else
    {
        printf("ft_memset test failed!\n");
        abort();
    }
}
