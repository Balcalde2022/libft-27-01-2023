/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:03:01 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/27 11:57:49 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función tolower convierte un Tipo de dato carácter a minúscula 
 * (A-Z a a-z). En el lenguaje de programación C las variables del tipo 
 * Tipo de dato carácter(char) almacenan el código ASCII del carácter 
 * (deben de estar dentro del rango 0-255 o 00-FF en hexadecimal). */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int main(void)
{
	char c = 'A';
	printf("%c", ft_tolower(c));
	return (0);

	int i;
	int c;

	i = 'A';
	while (i <= 'Z')
	{
		c = ft_tolower(i);
		write(1, &c, 1);
		i++;
	}
	return (0);
}
*/
