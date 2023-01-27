/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:26:27 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/29 09:01:35 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int isalnum(int c); Comprueba sin un carácter es alfanumérico. isalnum es una
 * macro que verifica el entero c pertenece al rango de letras (A a Z o a a z)
 * o al de dígitos (0 a 9), por defecto
 * */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	char c = ' ';
	printf("%d", ft_isalnum(c));
	return (0);
}
*/
