CC = gcc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBFT = libft

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_putptr.c \

OBJS =			$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			make -C $(LIBFT)
			cp $(LIBFT)/libft.a .

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS) $(BONUS_OBJS)
			make clean -C $(LIBFT)

fclean:		clean
			rm -f $(NAME)
			make fclean -C $(LIBFT)

re:	       fclean all
       
.PHONY:       all clean fclean re