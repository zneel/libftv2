#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char c = 'A';
    char buffer[2];
    int fd;

    fd = open("test_putchar_fd_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("Error creating temporary file");
        abort();
    }

    ft_putchar_fd(c, fd);
    close(fd);
    fd = open("test_putchar_fd_output.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Error reopening temporary file");
        abort();
    }
    ssize_t read_bytes = read(fd, buffer, 1);
    buffer[1] = '\0';
    close(fd);
    unlink("test_putchar_fd_output.txt");
    if (read_bytes != 1 || buffer[0] != c)
    {
        printf("ft_putchar_fd test failed!\n");
        abort();
    }
    else
    {
        printf("ft_putchar_fd test passed!\n");
    }
}
