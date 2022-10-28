/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:34:53 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/28 05:49:36 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h> 

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   memmove(dest, src, 8);
   printf("memmove		| dest = %s, src = %s\n", dest, src);

   char dest1[] = "oldstring";
   const char src1[]  = "newstring";
   ft_memmove(dest1, src1, 8);
   printf("ft_memmove	| dest = %s, src = %s\n", dest, src);

} */
