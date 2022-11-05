/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:52:29 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/05 18:21:12 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char) c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) str);
	return (0);
}

/* #include <stdio.h>

int main()
{
	const char *str = "tripouille";
	int c = '\0';
	printf("%s", ft_strchr(str, 't' + 256));
} */