/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:55:27 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/06 15:50:03 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calloc.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char*	maloqueiro;
	char	starti;

	i = 0;
	j = 0;
	maloqueiro = calloc(len, sizeof(char));
	starti = (char) start;
	while (s[i])
	{
		while (s[i] != starti)
			i++;
		if (s[i] == starti)
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
