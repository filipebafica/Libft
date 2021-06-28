/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_demo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:13:45 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:51:23 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	size_t	nmemb;
	size_t	size;

	nmemb = 5;
	size = sizeof(char);
	printf("nmemb: %ld\nsize: %ld\nstring (string with zeros): %s\n", nmemb, size, (char *)ft_calloc(nmemb, size));
	return (0);
}
