/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:23:55 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/26 08:54:24 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
isdigit devuelve un valor distinto de cero si c es un dígito decimal (0 - 9).
iswdigit devuelve un valor distinto de cero si c es un carácter ancho que 
corresponde a un carácter de dígito decimal. Cada una de estas rutinas 
devuelve 0 si c no cumple la condición de prueba.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int main(void)
{
	char p = '3';
	printf("%d", ft_isdigit(p));
	return (0);
}
*/
