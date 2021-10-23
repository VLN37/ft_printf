SRCS		= ft_printf.c  \
              ft_printerf.c ft_format_parser.c \
			  ft_printerf2.c
#LIB			= libft.a
CC			= clang
NAME		= libftprintf.a
AR			= ar
ARFLAGS		= rcs

OBJ			= ${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJ}
			make -C ./libft
			cp libft/libft.a libftprintf.a
			${AR} ${ARFLAGS} ${NAME} ${OBJ}

bonus:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ./libft

run:
			clang main.c libftprintf.a -I./libft && ./a.out

clean:
			make -C ./libft clean
			${RM} ${OBJ}

fclean:		clean
			make -C ./libft fclean
			${RM} ${NAME}

re:			clean all
