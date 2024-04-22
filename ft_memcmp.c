/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:42:13 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/22 17:47:17 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char *)s1[i] != (unsigned char *)s2[i])
			return ((unsigned char *)s1[i] - (unsigned char *)s2[i]);
		i++;
	}
	return(0);
}

int	main(void)
{
	char peido[] = "peido";
	char peido2[] = "peidoo3";
	printf("%d\n", ft_memcmp(peido, peido2, 90));
	printf("%d", memcmp(peido, peido2, 90));
	return(0);
}
