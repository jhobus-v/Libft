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
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	gugu;

	gugu = 0;
	unsigned char *p = s;
	while (gugu < n && p[gugu] != '\0')
	{
		p[gugu] = (unsigned char)c;
		gugu++;
	}
	return (p);
}

/*int	main(void)
{
	char	p[] = "peidasso";
	ft_memset(p, 'j', 5);
	printf("%s", p);
	return (0);
}*/
