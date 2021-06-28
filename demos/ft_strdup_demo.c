/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:53:28 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/27 23:48:44 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(const char *s);

int		main(void)
{
	const char *s = "up the irons";

	printf("String: %s\nft_strdup: %s\n", s, ft_strdup(s));
	return (0);
}
