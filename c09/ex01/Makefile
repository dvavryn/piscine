CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCDIR = srcs

HSRCDIR = includes

SRCS =  $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strcmp.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_swap.c

OBJS = $(SRCS:.c=.o) $(HSRCDIR:.h=.o)

NAME = libft.a

all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
