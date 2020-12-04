NAME = libftprintf.a

SRCS = sources/ft_printf.c

HDR = headers

LIB = libft

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

#CFLAG : -Wall

%.o: %.c
	${CC} -I${HDR} -L${LIB} -c $^ -o $@

${NAME}: ${OBJS}
	cd libft && make

all: ${NAME}

clean:
	${RM} ${OBJS}
	cd libft && make clean

fclean: clean
	${RM} ${NAME}
	cd libft && make fclean
