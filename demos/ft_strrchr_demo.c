/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 23:17:28 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:56:08 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	const char *s = "ab-cdefg-hhhh";
	int c = '-';

	printf("String: %s | c: %c | Return: %s\n", s, c, ft_strrchr(s, c));
	return (0);
}
