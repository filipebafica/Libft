/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 23:17:28 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 00:20:28 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int		main(void)
{
	const char *s = "ab-cdefg-hhhh";
	int c = '-';

	printf("String: %s | c: %c | Return: %s\n", s, c, ft_strrchr(s, c));
	return (0);
}
