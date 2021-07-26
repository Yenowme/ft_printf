# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeong-yena <jeong-yena@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 17:23:54 by jeong-yena        #+#    #+#              #
#    Updated: 2021/07/26 17:23:56 by jeong-yena       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
