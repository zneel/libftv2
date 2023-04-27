#include <stdio.h>
#include <string.h>
#include "libft.h"

void add_one(unsigned int i, char *c) {
    (void)i;
    *c = *c + 1;
}

void to_upper(unsigned int i, char *c) {
    (void)i;
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 'a' + 'A';
    }
}

void test_ft_striteri() {
    char s1[] = "hello";
    ft_striteri(s1, &add_one);
    if (strcmp(s1, "ifmmp") != 0) {
        printf("FAILED: expected 'ifmmp', but got '%s'\n", s1);
        return;
    }

    char s2[] = "Hello, world!";
    ft_striteri(s2, &to_upper);
    if (strcmp(s2, "HELLO, WORLD!") != 0) {
        printf("FAILED: expected 'HELLO, WORLD!', but got '%s'\n", s2);
        return;
    }

    char s3[] = "";
    ft_striteri(s3, &add_one);
    if (strcmp(s3, "") != 0) {
        printf("FAILED: expected '', but got '%s'\n", s3);
        return;
    }

    printf("PASSED\n");
}

int main() {
    test_ft_striteri();
    return 0;
}
