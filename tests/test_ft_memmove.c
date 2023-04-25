#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char str1[] = "This is a test string for memmove";
    char str2[] = "This is a test string for memmove";

    ft_memmove(str1 + 12, str1 + 8, 22);
    memmove(str2 + 12, str2 + 8, 22);

    if (memcmp(str1, str2, sizeof(str1)) == 0)
    {
        printf("ft_memmove test passed!\n");
        return 0;
    }
    else
    {
        printf("ft_memmove test failed!\n");
        abort();
    }
}
