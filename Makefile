NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

ifeq ($(DEBUG), 1)
	CFLAGS+=-g3 -gdwarf-4
endif

ifeq ($(SAN), 1)
	CFLAGS+=-fsanitize=address -gdwarf-4
endif

ifeq ($(DEV), 1)
	CFLAGS+=-fsanitize=address -g3 -gdwarf-4
endif

INCLUDES = -I./includes

SRCS = sources/conv/ft_atoi.c \
       sources/conv/ft_itoa.c \
       sources/conv/ft_atoll.c \
       sources/ctypes/ft_isalnum.c \
       sources/ctypes/ft_isalpha.c \
       sources/ctypes/ft_isascii.c \
       sources/ctypes/ft_isdigit.c \
       sources/ctypes/ft_isprint.c \
       sources/ctypes/ft_tolower.c \
       sources/ctypes/ft_toupper.c \
       sources/ctypes/ft_isspace.c \
       sources/io/get_next_line.c \
       sources/io/get_next_line_utils.c \
       sources/io/printf/ft_printf.c \
       sources/io/printf/ntoa.c \
       sources/io/printf/out.c \
       sources/io/printf/print_c.c \
       sources/io/printf/print_di.c \
       sources/io/printf/print_p.c \
       sources/io/printf/print_percent.c \
       sources/io/printf/print_s.c \
       sources/io/printf/print_u.c \
       sources/io/printf/print_x.c \
       sources/io/printf/utils.c \
       sources/io/printf/ft_dprintf.c \
       sources/io/ft_putstr_fd.c \
       sources/io/ft_putendl_fd.c \
       sources/lists/ft_lstadd_back.c \
       sources/lists/ft_lstadd_front.c \
       sources/lists/ft_lstclear.c \
       sources/lists/ft_lstdelone.c \
       sources/lists/ft_lstiter.c \
       sources/lists/ft_lstlast.c \
       sources/lists/ft_lstmap.c \
       sources/lists/ft_lstnew.c \
       sources/lists/ft_lstsize.c \
       sources/lists/ft_lstprint.c \
       sources/lists/ft_lstreverse.c \
       sources/mem/ft_bzero.c \
       sources/mem/ft_calloc.c \
       sources/mem/ft_memchr.c \
       sources/mem/ft_memcmp.c \
       sources/mem/ft_memcpy.c \
       sources/mem/ft_memmove.c \
       sources/mem/ft_memset.c \
       sources/mem/ft_realloc.c \
       sources/strings/ft_split.c \
       sources/strings/ft_strchr.c \
       sources/strings/ft_strdup.c \
       sources/strings/ft_striteri.c \
       sources/strings/ft_strjoin.c \
       sources/strings/ft_strlcat.c \
       sources/strings/ft_strlcpy.c \
       sources/strings/ft_strlen.c \
       sources/strings/ft_strmapi.c \
       sources/strings/ft_strncmp.c \
       sources/strings/ft_strnstr.c \
       sources/strings/ft_strrchr.c \
       sources/strings/ft_strtrim.c \
       sources/strings/ft_substr.c \
       sources/algorithms/sorts/quick_sort.c \
       sources/algorithms/sorts/is_sorted.c \
       sources/ads/stack.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
