/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:05:12 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:54:46 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char const *s1 = "up the ";
	char const *s2 = "irons";
	char *new_string = ft_strjoin(s1, s2);

	printf("Prefix string: %s\n", s1);
	printf("Sufix string: %s\n", s2);
	printf("New string: %s\n", new_string);
	return (0);
}
