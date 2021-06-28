/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:29:04 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:55:58 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	const char *big = "aaabcabcd";
	const char *little = "aabc";
	size_t len = 10;

	printf("Big: %s | Little: %s | Return: %s\n", big, little, ft_strnstr(big, little, len));
	return (0);
}
