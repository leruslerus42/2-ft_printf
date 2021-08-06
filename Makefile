# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/18 23:18:56 by rrajaobe          #+#    #+#              #
#    Updated: 2021/08/06 16:48:35 by rrajaobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_hexa.c \
		ft_integer.c \
		ft_percent.c \
		ft_pointer.c \
		ft_printf.c \
		ft_string.c \
		ft_unsigned.c \
		ft_character.c \
		ft_check.c \

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
