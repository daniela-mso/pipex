NAME = pipex

CFLAGS = -Wall -Wextra -Werror -g -I libft

SRC = pipex.c \
path.c \
errors.c

OBJS = $(SRC:.c=.o) 

LIBFT_DIR = libft

LIBFT = libft/libft.a

all:$(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	cc $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME) 

%.o:%.c
	cc $(CFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean:
	-rm -f $(NAME)
	-rm -f $(OBJS)
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

valgrind: $(NAME)
	valgrind --leak-check=full --trace-children=yes ./$(NAME) infile "cat" "wc -l" outfile


