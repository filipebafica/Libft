/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:13:10 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:51:32 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

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
