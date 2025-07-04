NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

OBJS = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs $(NAME) ${OBJS}

clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re : fclean all

.PHONY: all clean fclean re