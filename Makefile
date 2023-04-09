NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	   ft_atoi.c ft_calloc.c ft_strdup.c

OBJS = $(SRCS:.c=.o)

TEST_SRCS = $(wildcard tests/test_ft_*.c)
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_EXEC = test_executable

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST_EXEC) $(TEST_OBJS) -L. -lft
	./$(TEST_EXEC)

$(TEST_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

.PHONY: all clean fclean re test