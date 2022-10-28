/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:31:18 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/14 07:48:42 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	a;

	a = 0;
	while (*str)
	{		
		str++;
		a++;
	}
	while (a >= 0)
	{
		if (*str == c)
			return ((char *)str);
		a--;
		str--;
	}
	return (0);
}
