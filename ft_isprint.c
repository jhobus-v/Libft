/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:33:29 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 13:00:57 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char jota)
{
	if ((jota >= 0 && jota <= 31) || (jota == 127))
		return (0);
	else
		return (1);
}

/*int	main(void)
{
	printf("%i", ft_isprint(0));
	return (0);
}*/
