/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:48:53 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 14:54:34 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*calloc;

	calloc = (void *) malloc(nitems * size);
	if (!calloc)
		return (0);
	ft_bzero(calloc, (nitems * size));
	return (calloc);
}
