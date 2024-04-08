/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:20:37 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/08 17:11:18 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	peido;

	peido = 0;
	while (peido < n)
	{
		*(unsigned char*)(s + peido) = (unsigned char)c;
		peido++;
	}
	return (s);
}

int	main(void)
{
	char *s = "peidoherro";
	ft_memset(s, 'y', 6);
	printf("%s", s);
	return (0);
}
