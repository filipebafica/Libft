/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:53:30 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 22:20:00 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	const char *nptr = "   ++1";
	const char *nptr2 = "10";
	const char *nptr3 = "600";

	printf("String: %s | ft_atoi: %d\n", nptr, ft_atoi(nptr));
	printf("String: %s | ft_atoi: %d\n", nptr2, ft_atoi(nptr2));
	printf("String: %s | ft_atoi: %d\n", nptr3, ft_atoi(nptr3));
	return(0);
}
