/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:20:37 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 14:43:25 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	gugu;
	unsigned char	*p;

	p = s;
	gugu = 0;
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
