/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 23:35:05 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:52:22 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	const char src[8] = "xxxaxxx\0";
	char		dest[8] = "yyyyyyy\0";
	char 		c = 'a';
	int 		n = 4;

	printf("c: %c | n: %d\nBefore ft_memccpy call. src: %s dest: %s\n", c, n, src, dest);
	char *ft_memccpy_rtrn = ft_memccpy(dest, src, c, n);
	printf("After ft_memccpy call. src: %s dest: %s\nft_memccpy returns: %s\n", src, dest, ft_memccpy_rtrn);
	return (0);
}
