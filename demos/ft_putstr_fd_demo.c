/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:40:08 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:43:39 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_fd(char *s, int fd);
int 	main(void)
{
	char *s = "hello world";
	int fd = 1;

	printf("s: %s | fd: %d\n", s, fd);
	ft_putstr_fd(s, fd);
	return (0);
}
