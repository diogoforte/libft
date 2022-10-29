/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:25 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/29 02:36:05 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int wordcount(const char *s, char c)
{
	int i;
	while (*s)
	{
		if (ft_strchr(s, c) != NULL)
			s++;
		else
			i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		size;
	char	**strings;

	i = 0;
	size = 0;
	strings = NULL;
	while (*s)
	{
		if (ft_strchr(s, c) != NULL)
			i++;
		else
		{
			while (ft_strchr(s, c) == NULL)
			{
				size++;
				s++;
			}
			strings = ft_substr(s, i, size);
			j++;
		}
		s++;
	}
	return (strings);
}

#include <stdio.h>

int main()
{
	char c = '-';
	char *s = "-diogo-";
	printf("wordcount = %d", wordcount(s, c));
}*/