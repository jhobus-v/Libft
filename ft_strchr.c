/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:39:08 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/20 17:23:51 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	char* str;

	str = (char *)s;
	while (str && *str != (char)c)
		str++;
	return(str);
}

/*int	main(void)
{
	char	*teste = "peido";

	printf("%s\n", teste);
	teste = ft_strchr(teste, 'i');
	printf("%s", teste);
}*/
