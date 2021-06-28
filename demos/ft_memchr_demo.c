/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:09:47 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:20:22 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	char *s = "xxxaxxxx";
	char c = 'a';
	size_t n = 4;

	char *ft_memchr_rtrn = ft_memchr(s, c, n);
	printf("s: %s | c %c | Returns %s\n", (char *)s, c, (char *)ft_memchr_rtrn);
	return (0);
}
