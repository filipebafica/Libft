/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 22:13:25 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:31:53 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int		main(void)
{
	char src[] = "xxxxxx";
	char dest[] = "yyyyyy";
	size_t n = 3;

	printf("Before ft_memcpy call. src: %s dest: %s\n", src, dest);
	char *ft_memcpy_rtrn = ft_memcpy(dest, src, n);
	printf("After ft_memcpy call. src: %s dest: %s\nft_memcpy returns: %s\n", src, dest, ft_memcpy_rtrn);
	return (0);
}
