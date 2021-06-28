/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:23:37 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 22:23:01 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	char s[7] = "abcdef\0";
	size_t n = 3;
	int i = 0;
	
	printf("String before ft_bzero call: %s\nn: %ld\nString after ft_bzero call: ", s, n);
	ft_bzero(s, n);
	while (i < sizeof(s))
	{
		printf("%c", s[i]);
		++i;
	}
	printf("\n");
	return (0);
}
