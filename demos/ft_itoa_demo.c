/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_demo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:02:37 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:52:13 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	int n;
	int n2;
	int n3;
	int n4;
	char *x;
	char *x2;
	char *x3;
	char *x4;

	n = -2147483648;
	n2 = 2050196389;
	n3 = 156;
	n4 = -0;
	x = ft_itoa(n);
	x2 = ft_itoa(n2);
	x3 = ft_itoa(n3);
	x4 = ft_itoa(n4);
	printf("n: %d | returns: %s\nn: %d | returns: %s\nn: %d | returns: %s\nn: %d | returns: %s\n",\
	n, x, n2, x2, n3, x3, n4, x4);
	return (0);
}
