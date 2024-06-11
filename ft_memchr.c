/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:07:45 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 13:17:19 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		if (*str == (char)c)
			return ((char *)s);
		str++;
		n--;
	}
	return (NULL);
}

/*int	main(void)
{
	char string[] = "teste";

	printf("%s\n", ft_memchr(string, 'e', 2));
	return(0);
}*/
