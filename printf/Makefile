NAME = libftprintf.a
SRC = ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_puthexlow_fd.c ft_puthexup_fd.c ft_putnbru_fd.c ft_putadd.c
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
