/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:42:03 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/13 18:20:00 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "dinunes-";
	ft_memset(str, '$', 3);
	printf("%s", str);
}*/
