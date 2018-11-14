# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 09:29:22 by anmauffr          #+#    #+#              #
#    Updated: 2018/11/07 19:14:00 by anmauffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = executable

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o

HEADERS = includes/ft.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADERS)
	ar rc libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean clean all
