/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 10:28:49 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/20 12:26:10 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t destsize = ft_strlen(dst);
	size_t i = 0;

	if (!src)
		return (destsize);
	while(i < (size -1) && src[i])
	{
		dst[destsize + i] = src[i];
		i++;
	}
	dst[destsize + i] = '\0';
	return (destsize + i);
}

int	main(void)
{
	char dest[20] = "bunda ";
	char src[] = "cagada";

	printf("%ld\n", ft_strlcat(dest, src, 3000));
	printf("%s", dest);
	return (0);
}
