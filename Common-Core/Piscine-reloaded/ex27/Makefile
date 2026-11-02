MAKEFLAGS += -s

NAME = ft_display_file
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	echo "Les'go!"

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re