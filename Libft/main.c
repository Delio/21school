/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glora <glora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:12:03 by glora             #+#    #+#             */
/*   Updated: 2020/11/19 19:33:45 by glora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	*ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "insert argument\n", 22);
	else {
		char	*dest1[10]; //for ft_strlcpy
		char	*dest2[10];
		//ft_putnbr(atoi(av[1]));
		//ft_putchar('\n');
		//ft_putnbr(ft_atoi(av[1]));
		//ft_putchar('\n');

		//******************* ft_strlen *************************

		// printf("%zu - number of char in string", ft_strlen(av[1]));
		// printf("\n");
		// printf("%zu - number of char in string", strlen(av[1]));

		//******************* ft_strlcpy *************************

		// printf("%zu", ft_strlcpy(dest1, av[1], sizeof(av[1])));
		// printf("\n");
		// printf("%zu", strlcpy(dest2, av[1], sizeof(av[1])));
		// printf("\n");
		// printf("%s", dest1);
		// printf("\n");
		// printf("%s", dest2);
		// printf("\n");

		//******************* ft_strlcat *************************

		printf("%zu", ft_strlcat(dest1, av[1], sizeof(av[1])));
		printf("\n");
		printf("%zu", strlcat(dest2, av[1], sizeof(av[1])));
		printf("\n");
		printf("%s", dest1);
		printf("\n");
		printf("%s", dest2);
		printf("\n");

	}
	return (0);
}