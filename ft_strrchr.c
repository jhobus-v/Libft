/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:39:08 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 14:50:31 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
		str++;
	str--;
	while (str && *str != (char)c)
		str--;
	return (str);
}

/*int	main(void)
{
	char	*teste = "livro magica";

	printf("%s\n", teste);
	teste = ft_strchr(teste, 'i');
	printf("%s", teste);
}*/
