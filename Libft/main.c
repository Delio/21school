/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glora <glora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:12:03 by glora             #+#    #+#             */
/*   Updated: 2020/11/18 15:51:03 by glora            ###   ########.fr       */
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
		write(1, "Erreur d'argument !\n", 22);
	else {
		ft_putnbr(atoi(av[1]));
		ft_putchar('\n');
		ft_putnbr(ft_atoi(av[1]));
		ft_putchar('\n');
	}
	return (0);
}