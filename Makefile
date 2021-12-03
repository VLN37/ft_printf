SRCFILES	= ft_printf.c  \
			  ft_printerf.c \
			  ft_printf_parser.c \
			  ft_printerf2.c

SRCDIR		= src
OBJDIR		= obj
CC			= gcc
NAME		= libftprintf.a
AR			= ar
ARFLAGS		= rcs
HEADER		= ft_printf.h

SRC			= $(addprefix $(SRCDIR)/, $(SRCFILES))
OBJ			= $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all:			mkdir $(NAME)

$(NAME):		$(OBJ) $(HEADER)
			make -C ./libft
			cp libft/libft.a libftprintf.a
			$(AR) $(ARFLAGS) $(NAME) $(OBJ)

bonus:			$(NAME)

# .c.o:
# 			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I ./libft

$(OBJDIR)/%.o:	$(SRCDIR)/%.c $(HEADER)
			$(CC) $(CFLAGS) -c $< -o $@ -I./ -I./libft

run:
			clang main.c libftprintf.a -I./libft && ./a.out

clean:
			make -C ./libft clean
			$(RM) $(OBJ)
			rm -rf obj

fclean:		clean
			make -C ./libft fclean
			$(RM) $(NAME)

mkdir:
			mkdir -p obj

re:			clean all
