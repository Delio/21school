/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glora <glora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:12:03 by glora             #+#    #+#             */
/*   Updated: 2020/11/16 11:26:34 by glora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char *str;

	str = "111123123123";
	printf("%d", ft_strlen(str));
	printf("\n");
	printf("%d", ft_atoi(str));
	return (0);
}