/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:33:06 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 15:00:18 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bigbrother;

	bigbrother = (char *)big;
	i = 0;
	j = 0;
	if (!little)
		return (bigbrother);
	while (big)
	{
		while (big[i] != little[j] && i < len)
			i++;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return (bigbrother + i);
			j++;
		}
		i = i + j;
		if (i == len)
			return (NULL);
		j = 0;
	}
	return (NULL);
}

/*int     main(void)
{
        char    big[] = "eu quero gozar";
        char    small[] = "quero";

        printf("meu:%s\n", ft_strnstr(big, small, 8));
        return (0);
}*/
