SRCS	= main.c fct.c

OBJS	= ${SRCS:.c=.o}

NAME	= hello

CC		= cc

CFLAGS	= -Wall -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:	${NAME}
