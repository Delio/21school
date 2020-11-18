/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glora <glora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:21:01 by glora             #+#    #+#             */
/*   Updated: 2020/11/17 10:21:04 by glora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	rtn = malloc(size * count);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, count);
	return (rtn);
}