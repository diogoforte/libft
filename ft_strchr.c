/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:52:29 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/31 01:37:36 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c > 127)
		return ((char *) str);
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
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