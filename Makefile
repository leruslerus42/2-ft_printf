# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/18 23:18:56 by rrajaobe          #+#    #+#              #
#    Updated: 2021/10/17 09:39:01 by rrajaobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

SRC =	src/ft_hexa.c \
		src/ft_integer.c \
		src/ft_percent.c \
		src/ft_pointer.c \
		src/ft_printf.c \
		src/ft_string.c \
		src/ft_unsigned.c \
		src/ft_character.c \
		src/ft_check.c \

all:	$(NAME)

$(NAME): *.c
		make -C ./libft
		cp ./libft/libft.a $(NAME)
		$(CC) $(FLAGS) -c $(SRC)
		ar rc $(NAME) *.o


clean: 
		rm -f ./libft/*.o
		rm -f *.o
		
fclean:	clean
		rm -f ./libft/libft.a
		rm -f $(NAME)

re:		fclean all
