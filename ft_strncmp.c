/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 06:50:57 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/29 02:33:33 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		if (str1[i] == str2[i] && str1[i] && str2[i])
			i++;
		else
			return (((unsigned char *) str1)[i] - ((unsigned char *) str2)[i]);
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   char str1[] = "atoms\0\0\0\0";
   char str2[] = "atoms\0abc";
   int ret;
   int ret1;

   ret = ft_strncmp(str1, str2, 8);
   ret1 = strncmp(str1, str2, 8);
   printf("ft_strncmp = %d\n", ret);
   printf("strncmp = %d\n", ret1);
} */