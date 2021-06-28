/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:16:51 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:06:12 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c);

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
