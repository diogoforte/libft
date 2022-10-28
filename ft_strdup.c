/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 05:27:46 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/27 17:08:15 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*s2;

	s2 = malloc(ft_strlen((char *) s) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (((char *)s)[i])
	{
		s2[i] = ((char *)s)[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/* #include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
	char* target1 = ft_strdup(source);
 
    printf("strdup =	%s\n", target);
	printf("ft_strdup =	%s\n", target1);
    return 0;
} */