/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:48:53 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/04 20:00:25 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_bzero.c"

void	*ft_calloc(size_t nitems, size_t size)
{
	void*	calloc;
	/*size_t	i;*/

	calloc = (void *) malloc(nitems * size);
	if (!calloc)
		return (0);
	ft_bzero(calloc, (nitems * size));
	/*
	while (i < (nitems * size))
	{
		*(unsigned char *)calloc[i] = 0;
		i++;
	}*/
	return (calloc);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*coc;
		int 	i = 0;

		coc = calloc(strlen(argv[1]), sizeof(char));
		while (argv[1][i])
		{
			coc[i] = argv[1][i];
			i++;
		}
		printf("%s", coc);
	}
}*/
