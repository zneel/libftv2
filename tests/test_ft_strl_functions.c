#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <string.h>
#include "libft.h"

void test_ft_strlcpy()
{
    char src[] = "This is a test string for strlcpy";
    char dest1[50];
    char dest2[50];
    size_t dest_size = sizeof(dest1);
    size_t result1, result2;

    // Test case 1: Check when dest_size > src length
    memset(dest1, 'A', dest_size);
    memset(dest2, 'A', dest_size);
    result1 = ft_strlcpy(dest1, src, dest_size);
    result2 = strlcpy(dest2, src, dest_size);
    if (memcmp(dest1, dest2, dest_size) != 0 || result1 != result2)
    {
        printf("ft_strlcpy test1 failed!\n");
        abort();
    }

    // Test case 2: Check when dest_size <= src length
    dest_size = 10;
    memset(dest1, 'A', sizeof(dest1));
    memset(dest2, 'A', sizeof(dest2));
    result1 = ft_strlcpy(dest1, src, dest_size);
    result2 = strlcpy(dest2, src, dest_size);
    if (memcmp(dest1, dest2, dest_size - 1) != 0 || result1 != result2)
    {
        printf("ft_strlcpy test2 failed!\n");
        abort();
    }

    printf("ft_strlcpy tests passed!\n");
}

void test_ft_strlcat()
{
    char src[] = "This is a test string for strlcat";
    char dest1[50] = "Destination: ";
    char dest2[50] = "Destination: ";
    size_t dest_size = sizeof(dest1);
    size_t result1, result2;

    // Test case 1: Check when dest_size > src length + dest initial length
    result1 = ft_strlcat(dest1, src, dest_size);
    result2 = strlcat(dest2, src, dest_size);
    if (memcmp(dest1, dest2, dest_size) != 0 || result1 != result2)
    {
        printf("ft_strlcat test1 failed!\n");
        abort();
    }

    // Test case 2: Check when dest_size <= src length + dest initial length
    char initial_dest[] = "Destination: ";
    char dest3[50];
    char dest4[50];

    strcpy(dest3, initial_dest);
    strcpy(dest4, initial_dest);

    dest_size = 15;
    result1 = ft_strlcat(dest3, src, dest_size);
    result2 = strlcat(dest4, src, dest_size);
    if (memcmp(dest3, dest4, dest_size - 1) != 0 || result1 != result2)
    {
        printf("ft_strlcat test2 failed!\n");
        abort();
    }

    printf("ft_strlcat tests passed!\n");
}

int main(void)
{
    test_ft_strlcpy();
    test_ft_strlcat();
}
