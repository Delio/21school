/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glora <glora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:28:24 by glora             #+#    #+#             */
/*   Updated: 2020/11/17 10:28:43 by glora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rtn;

	i = 0;
	if (!s || (!s && !f))
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(s));
	rtn = ft_strdup(s);
	if (!rtn)
		return (rtn = NULL);
	while (s[i])
	{
		rtn[i] = (*f)(i, s[i]);
		i++;
	}
	return (rtn);
}