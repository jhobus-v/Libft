/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:34:18 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 15:01:19 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	char	*trimmed;

	i = 0;
	f = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i <= f)
		i++;
	if (i > f)
		return (NULL);
	while (ft_strchr(set, s1[f]) && f >= 0)
		f--;
	trimmed = ft_calloc((f - i) + 1, sizeof(char));
	ft_strlcpy(trimmed, &s1[i], f - i + 1);
	return (trimmed);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s", ft_strtrim(argv[1], argv[2]));
	}
}*/
