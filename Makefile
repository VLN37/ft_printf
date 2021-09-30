SRCS		= ft_itoa.c ft_itoa_base.c ft_printf.c ft_uitoa.c \
              ft_printerf.c ft_strlen.c ft_toupper.c ft_format_parser.c \
#LIB			= libft.a
CC			= clang
NAME		= libftprintf.a
AR			= ar
ARFLAGS		= rcs

OBJ			= ${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJ}
			${AR} ${ARFLAGS} ${NAME} ${OBJ}

bonus:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

run:
			clang main.c ${SRCS} && ./a.out

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}
