/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:50:24 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/04 20:01:45 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"
#include "ft_calloc.c"

char	*ft_strdup(const char *s)
{
	char*	string;
	int	i;

	i = 0;
	string = ft_calloc(ft_strlen((char *)s), sizeof(char));
	while (s[i])
	{
		string[i] = s[i];
		i++;
	}
	return (string);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strdup(argv[1]));
	}
}*/
