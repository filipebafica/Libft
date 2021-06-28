/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_demo.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:31:17 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:53:35 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int 	main(void)
{
	int n = 10;
	int fd = 1;

	printf("c: %d | fd: %d\n", n, fd);
	ft_putnbr_fd(n, fd);
	return (0);
}
