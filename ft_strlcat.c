/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:25:37 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/13 14:46:23 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (size == 0 || size <= i)
		return (ft_strlen((char *)src) + size);
	while (src[j] && j < (size - i - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen((char *)src));
}

/*#include <string.h>
#include <stdio.h>
int main()
{
	char dest[] = "dinunes-";
	char src[] = "@student.42.fr";
	ft_strlcat(dest, src, 5);
	printf("Return - %zu \n", ft_strlcat(dest, src, 18));
	printf("String - %s\n", dest);
	char dest1[] = "dinunes-";
	char src1[] = "@student.42.fr";
	ft_strlcat(dest1, src1, 5);
	printf("Return - %zu \n", t_strlcat(dest1, src1, 18));
	printf("String - %s\n", dest1);
}*/