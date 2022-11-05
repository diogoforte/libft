/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:22:06 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/03 13:00:13 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *d;
	
	while (*lst)
	{
		d = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = d;
	}
	*lst = NULL;
}
