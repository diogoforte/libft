/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:42:52 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/28 09:20:29 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size += 1;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*str;
	long int	nb;

	nb = n;
	size = counter(nb);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size > 0)
	{
		if (nb < 0)
			nb *= -1;
		str[--size] = (nb % 10) + 48;
		nb /= 10;
	}
	if (str[0] == '0')
		str[0] = '-';
	if (n == 0)
		str = "0";
	return (str);
}

/* #include <stdio.h>

int main()
{
	int i = -2147483648;
	printf("counter : %d\n", counter(i));
	printf("itoa :%s\n", ft_itoa(i));
} */