CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = $(SRCS:.c=.0)

$(NAME): $(OBJS)
	@echo "ar rcs $(NAME) $(OBJS)"
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	@echo "cc -Wall -Wextra -Werror -c "
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)