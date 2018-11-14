# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 15:17:24 by anmauffr          #+#    #+#              #
#    Updated: 2018/11/06 16:40:42 by anmauffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/main.c \
	  srcs/ft_put.c

OBJ = main.o \
	  ft_put.o

HEADER = includes/ft_header.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(HEADER)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ) -I $(HEADER)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
