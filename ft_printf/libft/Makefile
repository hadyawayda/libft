CC = gcc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_calloc.c \
       ft_itoa.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memset.c \
       ft_putchar.c \
       ft_putnbr.c \
	ft_putstr.c \
       ft_putunbr.c \
       ft_putptr.c \
       ft_puthex.c \
       ft_strlcpy.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strlcat.c \
       ft_strncmp.c \
       ft_strnstr.c \
       ft_strdup.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_striteri.c \
       ft_split.c \
       ft_substr.c \
       ft_strmapi.c \
       ft_strlen.c \
       ft_toupper.c \
       ft_tolower.c \

BONUS_SRCS =  ft_lstnew.c \
              ft_lstadd_front.c \
              ft_lstsize.c \
              ft_lstlast.c \
              ft_lstadd_back.c \
              ft_lstdelone.c \
              ft_lstclear.c \
              ft_lstiter.c \
              ft_lstmap.c \

OBJS =			$(SRCS:.c=.o)

BONUS_OBJS =	$(BONUS_SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

bonus:		$(OBJS) $(BONUS_OBJS)
			$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
       
.PHONY:		all bonus clean fclean re