/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_demo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:35:28 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:53:11 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char s[] = "yyyyyy";
	int c = 'x';
	size_t n = 3;

	printf("Before ft_memset call: %s\n", s);
	char *ft_memset_rtrn = ft_memset(s, c, n);
	printf("After ft_memset call: %s\n", s);
	return (0);
}
