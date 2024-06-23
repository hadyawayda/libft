NAME =		libftprintf.a
SRCS =		ft_printf.c
OBJS =		$(SRCS:.c=.o)
LIBFT_DIR =		libft
LIBFT = 		$(LIBFT_DIR)/libft.a
CC =			gcc
CFLAGS =		-Wall -Wextra -Werror -I . -L $(LIBFT) -I /usr/include/c++/11 -I /usr/include/x86_64-linux-gnu/c++/11 -L /usr/lib/gcc/x86_64-linux-gnu/11
AR =			ar rcs

all:		$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
		$(AR) $(NAME) $(OBJS) $(LIBFT_DIR)/*.o

$(LIBFT):
			make -C $(LIBFT_DIR)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)
			make clean -C $(LIBFT_DIR)

fclean:		clean
			rm -f $(NAME)
			make fclean -C $(LIBFT_DIR)

re:			fclean all

.PHONY:		all clean fclean re