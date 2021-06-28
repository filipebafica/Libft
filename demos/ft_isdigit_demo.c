/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:59:47 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:51:55 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int c = 'a';
	int c2 = '9';
	int c3 = '#';

	printf("c: %c | ft_isdigit: %d\n", c, ft_isdigit(c));
	printf("c: %c | ft_isdigit: %d\n", c2, ft_isdigit(c2));
	printf("c: %c | ft_isdigit: %d\n", c3, ft_isdigit(c3));
	return (0);
}
