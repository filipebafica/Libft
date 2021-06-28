/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:10:35 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 00:30:35 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c);

int	main(void)
{
	int c = 's';

	printf("c: %c | ft_toupper: %c\n", c, ft_toupper(c));
	return (0);
}
