CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
NAME		= libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a
SRCS		= ft_printf.c print_char.c print_nbr.c hexbase.c#수정
OBJS		= $(SRCS:.c=.o)
INCS		= .
LIBC		= ar rc

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME) : $(OBJS)
	make all -C $(LIBFT)/
	cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
	$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

fclean : clean
	rm -rf $(NAME) $(OBJS) a.out a.out.*
	make fclean -C $(LIBFT)

clean :
	rm -rf $(OBJS)
	make clean -C $(LIBFT)

re : fclean all

test:
	make all -C $(LIBFT)/
	$(CC) -g3 $(SRCS) main.c -L./libft -l ft

leek:
	make all -C $(LIBFT)/
	$(CC) -g3 -fsanitize=address $(SRCS) main.c -L./libft -l ft
