NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJS = $(SRCS:.c=.o)

HEADER = ./includes/ft.h

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re