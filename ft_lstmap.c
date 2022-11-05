/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:30:02 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/03 12:53:12 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
			ft_lstdelone(lst, del);
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}