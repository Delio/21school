# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glora <glora@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 19:40:00 by glora             #+#    #+#              #
#    Updated: 2020/11/19 19:30:36 by glora            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = gcc
ARRAY = ar
FLAGS := -Wall -Werror -Wextra
SOURCES = ft_atoi.c\
	ft_strlen.c\
	ft_strlcpy.c\
	ft_strlcat

OBJECTS := ${SOURCES:c=o}
NAME = libft.a

all: $(NAME)
#delete main c and -o
$(NAME):
	$(COMPILE) $(FLAGS) -c $(SOURCES)
	$(ARRAY) r ${NAME} ${OBJECTS}
	$(COMPILE) main.c -c
	$(COMPILE) -o main main.o -L. -lft 

#delete main.o
clean:
		rm -f ${OBJECTS}
		rm -f main.o

fclean: clean
		rm -f $(NAME)

re: fclean all