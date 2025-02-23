CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = srcs
INCLUDES_DIR = includes
OBJS_DIR = $(SRCS_DIR)

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

HEADER = $(INCLUDES_DIR)/ft.h

LIBFT = libft.a

all: $(LIBFT)

$(LIBFT): $(OBJS)
	@echo "archiving onject files int $(LIBFT)..."
	ar rcs $(LIBFT) $(OBJS)
	@echo "$(LIBFT) created sucessfuly!"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER)

clean:
	@echo "cleaning object files..."
	rm -f $(OBJS)
	@echo "object files removed!"

fclean: clean
	@echo "cleaning $(LIBFT)..."
	rm -f $(LIBFT)
	@echo "$(LIBFT) removed!"

re: fclean all