/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:07:31 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 00:09:34 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s);

int		main(void)
{
	const char *s = "abc";

	printf("String: %s | ft_strlen: %ld\n", s, ft_strlen(s));
	return (0);
}
