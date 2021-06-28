/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_demo.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:57:16 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:53:28 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int 	main(void)
{
	char *s = "hello world";
	int fd = 1;

	printf("s: %s | fd: %d\n", s, fd);
	ft_putendl_fd(s, fd);
	return (0);
}
