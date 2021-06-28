/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:44:28 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:55:07 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char src[] = "xxxxxx";
	char dest[10] = "yyyyyyyyyy";
	size_t size = 6;

	printf("Before ft_strlcpy call | src: %s | dest: %s\n", src, dest);
	printf("After ft_strlcpy call | dest %s | ft_strlcpy returns: %ld\n", dest, ft_strlcpy(dest, src, size));
	return (0);
}
