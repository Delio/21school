/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glora <glora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:39:14 by glora             #+#    #+#             */
/*   Updated: 2020/11/17 11:33:54 by glora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);

int		*ft_strcpy(char *dst, const char *src);

int		ft_atoi(const char *str);

int		ft_isdigit(int c);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void    ft_bzero(void *s, size_t n);