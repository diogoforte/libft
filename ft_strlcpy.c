/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:17:23 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/13 13:24:23 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != '\0')
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen((char *)src));
}

/*#include <string.h>
#include <stdio.h>
int main()
{
	char dest[] = "";
	const char source[] = "dinunes-";
	printf("return - %zu \n", ft_strlcpy(dest, source, 4));
	printf("string - %s \n", dest);
}*/