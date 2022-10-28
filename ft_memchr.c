/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:19:53 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/14 14:14:10 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*strcast;
	unsigned char		ch;

	i = 0;
	strcast = (const unsigned char *) str;
	ch = (unsigned char) c;
	while (i < n)
	{
		if (*(unsigned char *)(strcast + i) == ch)
			return ((unsigned char *)(str + i));
		i++;
	}
	return (NULL);
}
