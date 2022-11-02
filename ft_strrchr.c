/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:31:18 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/31 01:39:23 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	a;

	a = 0;
	if (c > 127)
		return ((char *) str);
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
