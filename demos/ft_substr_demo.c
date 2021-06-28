/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_demo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:36:00 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:56:26 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char const *s = "up the irons";
	unsigned int start = 7;
	size_t len = 5;
	char *substring = ft_substr(s, start, len);

	printf("Original string: %s\n", s);
	printf("Start index: %d | Length: %ld\n", start, len);
	printf("Substring: %s\n", substring);
	return (0);
}
