/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:31:29 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 00:29:54 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c);

int	main(void)
{
	int c = 'S';

	printf("c: %c | ft_tolower: %c\n", c, ft_tolower(c));
	return (0);
}
