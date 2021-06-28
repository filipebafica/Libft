/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:45:44 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:45:59 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int		main(void)
{
	const char *s = "up the irons";
	int c = 't' + 256;

	printf("String: %s | c: %c | Return: %s\n", s, c, ft_strchr(s, c));
	return (0);
}
