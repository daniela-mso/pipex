NAME=libft.a

OBJS := ft_strlen.o \
	ft_strcpy.o \
	ft_memcmp.o \
	ft_atoi.o \
	ft_memcpy.o \
	ft_isprint.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_strncmp.o \
	ft_isdigit.o \
	ft_isalpha.o \
	ft_memset.o  \
	ft_strchr.o \
	ft_memchr.o \
	ft_bzero.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_strlcat.o \
	ft_strnstr.o \
	ft_strrchr.o \
	ft_strlcpy.o \
	ft_calloc.o \
	ft_strdup.o \
	ft_memmove.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_putendl_fd.o \
	ft_putnbr_fd.o \
	ft_itoa.o \
	ft_substr.o \
	ft_strjoin.o \
	ft_strtrim.o \
	ft_strmapi.o \
	ft_split.o \
	ft_striteri.o \
	ft_atol.o \
	ft_isspace.o



BONUS_OBJS := ft_lstnew_bonus.o \
	ft_lstadd_front_bonus.o \
	ft_lstsize_bonus.o \
	ft_lstlast_bonus.o \
	ft_lstadd_back_bonus.o \
	ft_lstdelone_bonus.o \
	ft_lstclear_bonus.o \
	ft_lstiter_bonus.o \
	ft_lstmap_bonus.o

all: $(NAME)

%.o: %.c
	@cc -Wall -Wextra -Werror -g -fPIC -c $<

$(NAME): $(OBJS)
	@ar r libft.a $(OBJS)

clean:
	@-rm -f ${OBJS} ${BONUS_OBJS} 

fclean:
	@-rm -f ${OBJS} ${BONUS_OBJS} ${NAME}

re: clean all

bonus: $(OBJS) $(BONUS_OBJS)
	@ar r $(NAME) $(OBJS) $(BONUS_OBJS)

so: $(OBJS)
	@cc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re bonus so

# target: dependencies dep2 dep3
# 	recipe
