/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:35:44 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/22 16:05:37 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char peido[] = "peido";
	char peido2[] = "peidoo3";
	printf("%d\n", ft_strncmp(peido, peido2, 90));
	printf("%d", strncmp(peido, peido2, 90));
	return(0);
}*/


