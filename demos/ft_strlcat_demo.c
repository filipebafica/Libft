/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:01:15 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 00:03:20 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		main(void)
{
	const char src[] = "the irons";
	char dst[] = "up ";
	size_t size = 13;

	printf("Before ft_strlcat call | src: %s | dst: %s\n", src, dst);
	printf("After ft_strlcat call | dst: %s | ft_strlcat returns: %ld\n", dst, ft_strlcat(dst, src, size));
	return (0);
}
