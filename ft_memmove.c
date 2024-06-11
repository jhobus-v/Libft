/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:00:12 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 14:41:04 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*gugu;
	const unsigned char	*gaga;
	size_t				penis;

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
