/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 08:39:39 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/25 20:27:23 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (*s1 == 0)
		return (0);
	if (*set == 0)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen((char *) s1);
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
#include <stdio.h>

int main ()
{
	char const *s1 = " 	dinunes- 	";
	char const *set = " 	";
	char *res = ft_strtrim(s1, set);
	printf("%s", res);
}*/