/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:46:24 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:40:36 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar_fd(char c, int fd);
int		main(void)
{
	char c = 'c';
	int fd = 1;

	printf("c: %c | fd: %d\n", c, fd);
	ft_putchar_fd(c, fd);
	return (0);
}