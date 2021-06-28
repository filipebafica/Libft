/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:31:17 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:42:58 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putnbr_fd(int n, int fd);
int 	main(void)
{
	int n = 10;
	int fd = 1;

	printf("c: %d | fd: %d\n", n, fd);
	ft_putnbr_fd(n, fd);
	return (0);
}
