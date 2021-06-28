/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:13:10 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 22:39:18 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	int c = 'a';
	int c2 = '9';
	int c3 = '#';

	printf("c: %c | ft_isalnum: %d\n", c, ft_isalnum(c));
	printf("c: %c | ft_isalnum: %d\n", c2, ft_isalnum(c2));
	printf("c: %c | ft_isalnum: %d\n", c3, ft_isalnum(c3));
	return (0);
}
