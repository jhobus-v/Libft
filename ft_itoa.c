/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:07:52 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 11:49:18 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mallocsize(int shelf)
{
	int	i;

	i = 0;
	while (shelf != 0)
	{
		shelf /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*maloqueiro;
	char	*narray;
	int		i;

	narray = "0123456789";
	i = mallocsize(n);
	if (n == 0)
		return ("0");
	i--;
	if (n < 0)
		i++;
	maloqueiro = ft_calloc(i, sizeof(int));
	if (n < 0)
	{
		maloqueiro[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		maloqueiro[i] = narray[n % 10];
		n /= 10;
		i--;
	}
	return (maloqueiro);
}

/*int	main(void)
{
	int	n = -15;
	printf("%s", ft_itoa(n));
	return (0);
}*/