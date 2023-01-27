/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:58:27 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/27 11:44:03 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función toupper() toma un carácter y devuelve su versión en mayúscula 
 * (si es que existe). Cuando el carácter no tiene versión en mayúscula, 
 * entonces se devuelve el argumento sin modificaciones. */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int main(void)
{
	char c = 'a';
	printf("%c", ft_toupper(c));
	return (0);
}
*/
