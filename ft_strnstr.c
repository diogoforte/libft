/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:34:43 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/05 18:08:14 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size;

	if (!len && little[0])
		return (NULL);
	i = -1;
	size = ft_strlen(little);
	if (ft_strlen(big) >= size && len >= size)
	{	
		while (++i <= len - size)
		{
			if (!ft_strncmp(&big[i], little, size))
				return ((char *)&big[i]);
		}
	}
	return (NULL);
}

/* #include <stdio.h>

int main()
{
	printf("%s", ft_strnstr("", "", 0));
} */