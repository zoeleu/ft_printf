NAME		= libftprintf.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g3 -c

INCDIR		= .

SRCS		= 	ft_printf.c \
				$(wildcard handlers/*.c) \
				$(wildcard lib/*.c)
OBJS		= ${SRCS:.c=.o}

BONUS_SRCS	= 
BONUS_OBJS	= ${BONUS_SRCS:.c=.o}

RM		= rm -f

all:		${NAME}

bonus:		${OBJS} ${BONUS_OBJS}
			ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

%.o: %.c
			${CC} ${CFLAGS} $< -o $@ -I ${INCDIR}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all
