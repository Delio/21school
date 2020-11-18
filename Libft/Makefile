# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glora <glora@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 19:40:00 by glora             #+#    #+#              #
#    Updated: 2020/11/17 11:29:26 by glora            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = gcc
FLAGS = -Wall -Werror -Wextra
SOURCES = *.c
OBJECTS = $(SOURCES: .c=.o)
PROGRAM = project.out

all: $(PROGRAM)

$(PROGRAM): $(SOURCES)
	gcc -c *.c 
	ar r libft.a *.o
	gcc -o project *.o libft.a

.c.o:
	$(gcc) $(FLAGS) $< -o $@

