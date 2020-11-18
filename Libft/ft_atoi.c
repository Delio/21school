/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glora <glora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:01:31 by glora             #+#    #+#             */
/*   Updated: 2020/11/16 11:37:02 by glora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	i;
	long 	nbr;
	int		negative;

	i = 0;
	nbr = 0;
	negative = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
					|| str[i] == '\r' || str[i] == 'v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		negative = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (negative == 1)
		return (-nbr);
	return (nbr);
}