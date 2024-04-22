/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:07:45 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/22 16:59:54 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
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
