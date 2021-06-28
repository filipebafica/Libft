/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:04:20 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 00:15:09 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	f(unsigned int i, char c)
{
	if (i >= 0)
		return (c = 'x');
	else
		return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		main(void)
{
	char *s = "abc";

	char *x = ft_strmapi(s, f);
	printf("Original string: %s\nNew string: %s\n", s, x);
	return (0);
}
