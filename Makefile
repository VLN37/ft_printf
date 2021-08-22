SRCS		= ft_itoa.c ft_itoa_base.c ft_printf.c ft_unsigned_itoa.c \
              ft_itoa.c ft_printing1.c ft_strlen.c \
              ft_itoa.c ft_toupper.c \

LIB			= libft.a
CC			= clang
NAME		= libftprintf.a
AR			= ar
ARFLAGS		= rcs

OBJ			= ${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJ}
			${AR} ${ARFLAGS} ${NAME} ${OBJ}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

run:
			clang main.c libft.a libftprintf.a

runmain:
			clang ${SRCS} main.c libft.a && ./a.out

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}
