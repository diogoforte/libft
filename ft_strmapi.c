/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 04:36:08 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/28 09:17:47 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	n;
	unsigned int	i;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	i = -1;
	str = malloc(n + 1);
	if (!str)
		return (NULL);
	while (n > ++i)
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}
