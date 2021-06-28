/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:39:33 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:53:02 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	const char	src[] = "xxxxxx";
	char		dest[] = "yyyyyy";
	int			n = 3;

	printf("Before ft_memmove call. src: %s dest: %s\n", src, dest);
	char *ft_memmove_rtrn = ft_memmove(dest, src, n);
	printf("After ft_memmove call. src: %s dest: %s\nft_memmove returns: %s\n", src, dest, ft_memmove_rtrn);
	return (0);
}
