SRC     = ft_calloc.c \
ft_strdup.c \
ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_substr.c \
ft_strcat.c \
ft_strcpy.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_strncat.c \
ft_strncat.c \
ft_strncpy.c
BNS     = ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c \
ft_lstclear_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c

OBJ     = $(SRC:.c=.o)

OBJ_BNS     = $(BNS:.c=.o)

NAME    = libft.a

CC      = gcc

RM      = rm -f

CFLAGS  = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): ${SRC}
	${CC} ${CFLAGS} -c ${SRC}
	ar rcs ${NAME} ${OBJ}

bonus: ${SRC} ${BNS}
	${CC} ${CFLAGS} -c ${SRC} ${BNS}
	ar rcs ${NAME} ${OBJ} ${OBJ_BNS}

clean:
	${RM} ${OBJ} ${OBJ_BNS}

fclean: clean
	${RM} ${NAME} ${OBJ_BNS}

re: fclean all

.PHONY : all clean fclean re bonus
