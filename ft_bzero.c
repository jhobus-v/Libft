/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:40:42 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/15 09:41:39 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  bolsonaro;
    
    bolsonaro = 0;
    unsigned char *lula = s;
    while (bolsonaro < n)
    {
        lula[bolsonaro] = 0;
        bolsonaro++;
    }
}

int main(void)
{
    char fazol[] = "Gripezinha";
    ft_bzero(fazol, 4);
    printf("%s", fazol);
    return (0);
    }
