/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:31:18 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/05 18:22:54 by dinunes-         ###   ########.fr       */
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
		if (*str == (unsigned char) c)
			return ((char *)str);
		a--;
		str--;
	}
	return (0);
}
