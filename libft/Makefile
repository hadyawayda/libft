CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_calloc.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strlcpy.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strlcat.c \
       ft_strncmp.c \
       ft_strnstr.c \
       ft_strcmp.c \
       ft_memset.c \
       ft_strlen.c \
       ft_toupper.c \
       ft_tolower.c \

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re:
	fclean all
       
.PHONY:
	all clean fclean re bonus
