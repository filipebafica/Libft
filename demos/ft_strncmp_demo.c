/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:23:04 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:55:49 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	const char *s1 = "xxxxxaaa";
	const char *s2 = "xxxxxbbb";
	size_t		n = 6;

	int ft_strncmp_rtrn = ft_strncmp(s1, s2, n);
	printf("S1: %s | S2 %s | Returns %d\n", s1, s2, ft_strncmp_rtrn);
	return (0);
}
