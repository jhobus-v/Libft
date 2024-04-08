/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:44:06 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/08 13:15:49 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include <stdio.h>

int ft_isalnum(char j)
{
	if (ft_isalpha(j) || ft_isdigit(j))
		return (1);
	else
		return (0);
}

int main(void)
{
	printf("%i", ft_isalnum(1));
	return (0);
}
