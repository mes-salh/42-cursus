NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_puthexlow.c ft_puthexup.c ft_putnbru.c ft_putadd.c
OBJS = ${SRC:.c=.o}
CC = cc -Wall -Wextra -Werror
RM = rm -f
AR = ar -rcs

%.o : %.c ft_printf.h
	${CC} -c $< -o $@

${NAME}: ${OBJS}
		${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: clean
