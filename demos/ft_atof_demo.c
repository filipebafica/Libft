/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof_demo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:53:30 by fbafica           #+#    #+#             */
/*   Updated: 2022/04/11 23:20:37 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	const char *nptr = "   +1.9";
	const char *nptr2 = "10.123";
	const char *nptr3 = "-600.21";

	printf("String: %s | ft_atof: %f\n", nptr, ft_atof(nptr));
	printf("String: %s | ft_atof: %f\n", nptr2, ft_atof(nptr2));
	printf("String: %s | ft_atof: %f\n", nptr3, ft_atof(nptr3));
	return(0);
}
