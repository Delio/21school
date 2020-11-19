# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glora <glora@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 19:40:00 by glora             #+#    #+#              #
#    Updated: 2020/11/19 10:05:38 by glora            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = gcc
FLAGS = -Wall -Werror -Wextra
SOURCES = ft_atoi.c
OBJECTS = $(SOURCES: .c=.o)
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all