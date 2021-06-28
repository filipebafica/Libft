/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:16:51 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:52:04 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int c = 'a';
	int c2 = '9';
	int c22 = 9;
	int c3 = '#';

	printf("c: %c | ft_isprint: %d\n", c, ft_isprint(c));
	printf("c: %c | ft_isprint: %d\n", c2, ft_isprint(c22));
	printf("c: %c | ft_isprint: %d\n", c3, ft_isprint(c3));
	return (0);
}
