/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:29:04 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 00:19:28 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		main(void)
{
	const char *big = "aaabcabcd";
	const char *little = "aabc";
	size_t len = 10;

	printf("Big: %s | Little: %s | Return: %s\n", big, little, ft_strnstr(big, little, len));
	return (0);
}
