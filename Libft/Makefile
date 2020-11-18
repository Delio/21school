# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glora <glora@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 19:40:00 by glora             #+#    #+#              #
#    Updated: 2020/11/18 14:25:40 by glora            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = gcc
FLAGS = -Wall -Werror -Wextra
SOURCES = ft_atoi.c
OBJECTS = $(SOURCES: .c=.o)
PROGRAM = libft.a

$(PROGRAM): $(OBJECTS)
	ar r $(PROGRAM) $(OBJECTS)

all: $(PROGRAM)

clean:
		rm *.o

fclean: clean
		rm -f $(PROGRAM)