/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:18:15 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/06 06:12:07 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/* 
Description:
	Putchar_fd outputs the character ’c’ to the given file descriptor.
Return Value:
	None.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
