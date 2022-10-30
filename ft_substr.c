/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 07:39:09 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/30 04:10:34 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substring;
	size_t		i;

	i = ft_strlen(s);
	if (!(s))
		return (NULL);
	if (start >= i)
		len = 0;
	else if (len > (i - start))
		len = i - start;
	substring = malloc(len + 1);
	if (!(substring))
		return (NULL);
	substring[len] = '\0';
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	return (substring);
}

/* #include <stdio.h>

int main()
{
	char	str[] = "diogo";
	char	*strsub = ft_substr(str, 0, 5);
	printf("str		=	%s\n", str);
	printf("ft_strsub	=	%s\n", strsub);
} */