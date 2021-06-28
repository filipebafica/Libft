/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:57:16 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:41:53 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putendl_fd(char *s, int fd);
int 	main(void)
{
	char *s = "hello world";
	int fd = 1;

	printf("s: %s | fd: %d\n", s, fd);
	ft_putendl_fd(s, fd);
	return (0);
}
