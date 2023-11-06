SRC = ft_isalpha.c ft_strrchr.c \
ft_isdigit.c ft_tolower.c ft_toupper.c \
ft_isascii.c ft_strchr.c ft_isprint.c ft_strlen.c \
 ft_isalnum.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
 ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_memchr.c ft_memcmp.c
OBJS = ${SRC:.c=.o}
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror -g
CC = cc
INCS = .
RM = rm -f
NAME = libft.a
SO = libt.so

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

all: ${NAME}

clean:
	${RM} *.o

fclean: clean
		${RM} ${NAME} ${SO}

re: fclean all
