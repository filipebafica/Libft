/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_demo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:23:04 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/25 17:06:11 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	const char *s1 = "xxxxxaaa";
	const char *s2 = "xxxxxbbb";

	int ft_strcmp_rtrn = ft_strcmp(s1, s2);
	printf("S1: %s | S2 %s | Returns %d\n", s1, s2, ft_strcmp_rtrn);
	return (0);
}
