/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:33:06 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/11 17:13:21 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *string, char delimiter)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (string[i] == delimiter)
		i++;
	while (string[i])
	{
		if (string[i] != delimiter)
		{
			words++;
			while (string[i] != delimiter && string[i])
				i++;
		}
		while (string[i] == delimiter)
			i++;
	}
	return (words);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		camisa;
	char**	gaveta;

	gaveta = ft_calloc(count_words(s, c), sizeof(char *));
	j = 0;
	i = 0;
	camisa = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		i = 0;
		while (s[j + i] != c && s[j + i])
			i++;
		if (i > 0)
			gaveta[camisa++] = ft_substr(s, j, i);
		j += i;
	}
	return (gaveta);
}

int	main(int argc, char **argv)
{
	char **teste;
	(void)argc;

	teste = ft_split(argv[1], ' ');
	printf("%s\n", teste[0]);
}

/*
	int	i = 0;
	mlc = ft_calloc(palavra, sizeof(char *))

	if (letra)
		palavra++;
		while (== letra)
			++;
		while (== spaco || tab)
			++;
		
	while (mlc[i])
	{
		mlc[i] = ft_calloc(ft_strlen("eu") + 1, sizeof(char));
		while (j < ft_strlen("eu"))
		{
			mlc[i][j] = str[j];
			j++;
		}
	}*/