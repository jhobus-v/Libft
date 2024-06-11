/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:58:25 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 14:46:08 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*chad;
	const char	*woman;
	size_t		persona;

	chad = dst;
	woman = src;
	persona = 0;
	while (persona < size && woman[persona] != '\0')
	{
		chad[persona] = woman[persona];
		persona++;
	}
	return (persona);
}

/*int	main(void)
{
	char	dest[20];
	char	src[] = "testando";

	printf("%ld", ft_strlcpy(dest, src, 30));
	printf("%s", dest);
	return (0);
}*/
