/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:34:43 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/31 01:45:36 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i])
	{
		j = 0;
		while ((i + j) < len && little[j] == big[i + j])
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *) &big[i]);
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main()
{
	printf("%s", ft_strnstr("", "", -1));
} */