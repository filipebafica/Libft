/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:34:50 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 00:22:49 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);
int		main(void)
{
	char const *s1 = "   xxxyyyyy";
	char const *set = " x";
	char *new_string; 

	new_string = ft_strtrim(s1, set);
	printf("String to be trimed: %s | Set: %s | Trimed string: %s\n", s1, set, new_string);
	return (0);
}
