#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char str1[50] = "This is a test string for bzero";
    char str2[50] = "This is a test string for bzero";

    ft_bzero(str1 + 11, 6);
    bzero(str2 + 11, 6);

    if (memcmp(str1, str2, sizeof(str1)) == 0)
        printf("ft_bzero test passed!\n");
    else
    {
        printf("ft_bzero test failed!\n");
        abort();
    }
}
