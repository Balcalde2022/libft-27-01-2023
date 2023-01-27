/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:29:38 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/26 09:36:51 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*isprint devuelve un valor distinto de cero si c es un carácter imprimible
 * (0x20 - 0x7E), incluido el carácter de espacio. isprint devuelve un valor
 * distinto de cero si c es un carácter ancho imprimible, incluido el carácter
 * ancho del espacio. Cada una de estas rutinas devuelve 0 
 * si c no cumple la condición de prueba */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	char c = '+';
	printf("%d", ft_isprint(c));
	return (0);
}
*/
