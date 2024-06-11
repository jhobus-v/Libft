/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 10:28:49 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 14:45:28 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destsize;
	size_t	i;

	i = 0;
	destsize = ft_strlen(dst);
	if (!src)
		return (destsize);
	while (i < (size -1) && src[i])
	{
		dst[destsize + i] = src[i];
		i++;
	}
	dst[destsize + i] = '\0';
	return (destsize + i);
}

/*int	main(void)
{
	char dest[20] = "bunda ";
	char src[] = "cagada";

	printf("%ld\n", ft_strlcat(dest, src, 3000));
	printf("%s", dest);
	return (0);
}*/
