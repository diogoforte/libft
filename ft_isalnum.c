/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:33:20 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/25 20:32:06 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (ft_isalpha(a))
		return (1);
	if (ft_isdigit(a))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	char c; 

	c = 'a';
	if (ft_isalnum(c) == 0)
		 printf("%c is not an alphanumerical.\n", c);
	else
		 printf("%c is an alphanumerical.\n", c);

	return 0;
}*/