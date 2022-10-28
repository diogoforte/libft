/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:34:17 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/13 18:19:44 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}

/*int main()
{
	char c; 

	c = 'c';
	if (ft_isalpha(c) == 0)
		 printf("%c is not an alphabet.\n", c);
	else
		 printf("%c is an alphabet.\n", c);

	return 0;
}*/