SRCS	= main.c functions.c mark.c read_file.c

OBJS	= ${SRCS:.c=.o}

NAME	= BSQ

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra


.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}
