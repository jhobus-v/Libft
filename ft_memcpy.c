/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:42:27 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 14:39:55 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int			pepe;
	unsigned char			*destination;
	const unsigned char		*copied;

	pepe = 0;
	destination = dest;
	copied = src;
	while (pepe < n)
	{
		destination[pepe] = copied[pepe];
		pepe++;
	}
	return (destination);
}

/*int main(void)
{
  char source[] = "penis";
  size_t source_size = 0;
  while(source[source_size] != '\0')
  {
	source_size++;
  }
  char destination[] = "carsarecoolerthanyouthink";
  printf("%s\n", destination);
  ft_memcpy(destination, source, source_size);
  printf("%s\n", destination);
  return 0;
}*/
