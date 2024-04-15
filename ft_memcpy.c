/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:42:27 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/15 10:50:17 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t pepe = 0;
  unsigned char* destination = dest;
  const unsigned char* copied = src;
  while (pepe < n)
  {
    destination[pepe] = copied[pepe];
    pepe++;
  }
  return destination;
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
