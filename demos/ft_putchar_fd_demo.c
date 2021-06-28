/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_demo.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:46:24 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:53:21 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char c = 'c';
	int fd = 1;

	printf("c: %c | fd: %d\n", c, fd);
	ft_putchar_fd(c, fd);
	return (0);
}