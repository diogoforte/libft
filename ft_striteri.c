/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 05:06:55 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/28 05:12:11 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (*str)
		f(i++, &(str++));
}

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	n;

	if (!str)
		return ;
	n = ft_strlen(str);
	while (n-- > 0)
		f(n, &str[n]);
}