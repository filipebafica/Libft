/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:04:20 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:55:39 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	f(unsigned int i, char c)
{
	if (i >= 0)
		return (c = 'x');
	else
		return (c);
}

int		main(void)
{
	char *s = "abc";

	char *x = ft_strmapi(s, f);
	printf("Original string: %s\nNew string: %s\n", s, x);
	return (0);
}
