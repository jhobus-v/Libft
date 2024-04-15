/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:00:12 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/15 15:39:30 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "ft_memcpy.c"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char* gugu;
	const unsigned char* gaga;
	size_t			penis;

	penis = 0;
	gugu = str1;
	gaga = str2;
	if (gugu == NULL && gaga == NULL)
		return (NULL);
	if (gugu > gaga)
		while (n--)
			gugu[n] = gaga[n];
	else
		ft_memcpy(gugu, gaga, n);
	return (gugu);
}

/*int	main(void)
{
	char desti[] = "penisazul";
	char src[] = "cuzin";
	printf("%s\n", desti);
	ft_memmove(desti, src, 5);
	printf("%s", desti);
	return 0;
}*/

