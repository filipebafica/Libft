/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_demo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:23:37 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:51:13 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "libft.h"

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
