/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:34:50 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/13 18:19:47 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}

/*int main()
{
	char c; 

	c = 12;
	if (ft_isascii(c) == 0)
		 printf("%c is not ascii.\n", c);
	else
		 printf("%c is ascii.\n", c);

	return 0;
}*/