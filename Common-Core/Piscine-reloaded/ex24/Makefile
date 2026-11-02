NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS_DIR = srcs
INCS_DIR = includes

SRCS    = $(SRCS_DIR)/ft_putchar.c \
          $(SRCS_DIR)/ft_putstr.c \
          $(SRCS_DIR)/ft_strcmp.c \
          $(SRCS_DIR)/ft_strlen.c \
          $(SRCS_DIR)/ft_swap.c

OBJS    = $(SRCS:.c=.o)

RM      = rm -f
LIBC    = ar rc
LIBR    = ranlib

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
