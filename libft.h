/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:30:16 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/04/15 12:20:43 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_strlen(char *str);//count string size
void    ft_bzero(void *s, size_t n);//turn n bytes into zero
int	ft_isalpha(char b);//checks if it is alphabet
int	ft_isalnum(char j);//checks if its all number
int	ft_isascii(char bola);//checks if its all asci table characters
int	ft_isdigit(int a);//checks if its a digit
int	ft_isprint(char jota);//checks if its printable
void	*ft_memcpy(void *dest, const void *src, size_t n);//copies n bytes
void	*ft_memset(void *s, int c, size_t n);//set n bytes to a letter?

#endif
