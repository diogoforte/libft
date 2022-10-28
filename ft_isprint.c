/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:36:14 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/26 20:11:55 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}

/*int main()
{
	char c; 

	c = 57;
	if (ft_isprint(c) == 0)
		 printf("%c is not printable.\n", c);
	else
		 printf("%c is a printable.\n", c);

	return 0;
}*/
