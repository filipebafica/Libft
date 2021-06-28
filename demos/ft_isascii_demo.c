/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:27:41 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:51:47 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int c = 'a';
	int c2 = '9';
	int c3 = '#';

	printf("c: %c | ft_isalpha: %d\n", c, ft_isascii(c));
	printf("c: %c | ft_isalpha: %d\n", c2, ft_isascii(c2));
	printf("c: %c | ft_isalpha: %d\n", c3, ft_isascii(c3));
	return (0);
}
