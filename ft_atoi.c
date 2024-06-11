/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:52:42 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 13:00:51 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	signal;

	i = -1;
	n = 0;
	signal = 1;
	while (str[++i])
	{
		while (str[i] < 48 || str[i] > 57)
		{
			if (n != 0)
				return (n);
			if (ft_isalpha(str[i]))
				return (0);
			if ((str[i] == '+' || str[i] == '-')
				&& (str[i + 1] == '+' || str[i + 1] == '-'))
				return (0);
			if (str[i] == '-')
				signal *= -1;
			i++;
		}
		n = n * 10 + (str[i] - 48);
	}
	return (n * signal);
}

/*int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d\n", atoi(argv[1]));
	}
	printf("\n");
}*/
