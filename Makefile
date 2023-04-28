NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

ifeq ($(CI), true)
	CFLAGS += -fsanitize=address -g3 -lbsd
endif

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	   ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c ft_putstr_fd.c ft_itoa.c ft_split.c ft_striteri.c \
	   ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c

OBJS = $(SRCS:.c=.o)

SRCS_BONUS = 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

TEST_SRCS = $(wildcard tests/test_ft_*.c)
TEST_EXES = $(TEST_SRCS:.c=.out)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS_BONUS)


test: $(TEST_EXES)
	./run_tests.sh

clean_tests:
	rm -f $(TEST_EXES)

%.out: %.c $(NAME)
	$(CC) $(CFLAGS) -I. -o $@ $< $(NAME)

.PHONY: all clean fclean re test clean_tests bonus