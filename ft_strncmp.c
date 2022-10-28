/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 06:50:57 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/27 17:30:16 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (((unsigned char *) str1)[i] - ((unsigned char *) str2)[i]);
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   char str1[] = "t";
   char str2[] = "tss";
   int ret;
   int ret1;

   ret = ft_strncmp(str1, str2, 7);
   ret1 = strncmp(str1, str2, 7);
   printf("ft_strncmp = %d\n", ret);
   printf("strncmp = %d\n", ret1);
} */