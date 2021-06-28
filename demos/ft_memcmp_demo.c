/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_demo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:27:16 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:52:40 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	const char *s1 = "xxxaaa";
	const char *s2 = "xxxbbb";
	size_t		n = 4;

	int ft_memcmp_rtrn = ft_memcmp(s1, s2, n);
	printf("S1: %s | S2 %s | Return %d\n", s1, s2, ft_memcmp_rtrn);
	return (0);
}
