/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:24:28 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/29 09:01:26 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*isalpha (c) es una función en C que se puede usar para verificar si el
 * carácter pasado es un alfabeto o no. Devuelve un valor distinto de cero si
 * es un alfabeto; de lo contrario, devuelve 0. Por ejemplo, devuelve valores
 * distintos de cero para 'a' a 'z' y 'A' a 'Z' y ceros para otros 
 * caracteres.*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main(void)
{
	char c = 'a';
	printf("%d", ft_isalpha(c));
	return (0);
}
*/
