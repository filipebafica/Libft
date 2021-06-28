/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 21:58:17 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 22:56:55 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int c = 'a';
	int c2 = '9';
	int c3 = '#';

	printf("c: %c | ft_isalpha: %d\n", c, ft_isalpha(c));
	printf("c: %c | ft_isalpha: %d\n", c2, ft_isalpha(c2));
	printf("c: %c | ft_isalpha: %d\n", c3, ft_isalpha(c3));
	return (0);
}
