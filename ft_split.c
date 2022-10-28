/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:25 by dinunes-          #+#    #+#             */
/*   Updated: 2022/10/27 20:34:38 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	len(char const *str, char c, int start)
{
	while (str[start] != c)
	{
		start++;
	}
	return (start);
}

char **ft_split(char const *s, char c)
{
	int start;
	char **str;

	*str = "a";
	start = 0;
	while (*(s + start))
	{
		if (ft_strchr(s, c) != NULL)
		{
			start++;
		}
		else if (ft_strchr(s, c) == NULL)
		{
			*str = ft_substr(s, start, (size_t) len(s, c, start));
			start++;
		}
		else
			return (0);
	}
	return(str);
}
*/