#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char src[] = "This is a test string for memcpy";
    char dest1[50];
    char dest2[50];
    bzero(dest1, 50);
    bzero(dest2, 50);
    ft_memcpy(dest1, src, 33);
    memcpy(dest2, src, 33);

    if (memcmp(dest1, dest2, sizeof(dest1)) == 0)
    {
        printf("ft_memcpy test passed!\n");
        return 0;
    }
    else
    {
        printf("ft_memcpy test failed!\n");
        abort();
    }
}
