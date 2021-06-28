/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_demo.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:40:08 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:53:43 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int 	main(void)
{
	char *s = "hello world";
	int fd = 1;

	printf("s: %s | fd: %d\n", s, fd);
	ft_putstr_fd(s, fd);
	return (0);
}
