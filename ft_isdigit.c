/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:35:23 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/13 18:19:49 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

/*int main()
{
	char c; 

	c = 57;
	if (ft_isdigit(c) == 0)
		 printf("%c is not a digit.\n", c);
	else
		 printf("%c is a digit.\n", c);

	return 0;
}*/