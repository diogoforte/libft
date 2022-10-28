/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 08:11:50 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/16 08:11:50 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!(res))
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(res, s2, ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	return (res);
}
