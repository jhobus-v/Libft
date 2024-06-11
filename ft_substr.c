/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:55:27 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/11 17:14:24 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*maloqueiro;

	i = 0;
	j = 0;
	maloqueiro = ft_calloc(len + 1, sizeof(char));
	while (s[i])
	{
		while (i < start)
			i++;
		if (i == start)
		{
			while (j < len && s[i + j] != '\0')
			{
				maloqueiro[j] = s[i + j];
				j++;
			}
			return (maloqueiro);
		}
	}
	return (NULL);
}

/*int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		printf("%s", ft_substr(argv[1], '1', 100000));
	}
}*/
