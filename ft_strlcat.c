/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:46:59 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/27 11:17:05 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Las funciones strlcpy() y strlcat() copian y concatenan cadenas
 * respectivamente. Están diseñados para ser reemplazos más seguros, más
 * consistentes y menos propensos a errores para strncpy(3) y strncat(3).
 * A diferencia de esas funciones, strlcpy() y strlcat() toman el tamaño
 * completo del búfer (no solo la longitud) y garantizan la terminación NUL
 * del resultado (siempre que el tamaño sea mayor que 0 o, en el caso de 
 * strlcat() , siempre que haya al menos un byte libre en dst). Tenga en 
 * cuenta que se debe incluir un byte para el NUL en el tamaño. También tenga
 * en cuenta que strlcpy() y strlcat() solo funcionan en cadenas "C" verdaderas.
 * Esto significa que para strlcpy() src debe terminar en NUL y para strlcat()
 * tanto src como dst deben terminar en NUL. */

/*
En computación el lenguaje de programación C ofrece una llamada en la
biblioteca estándar de C denominada strcat. Esta permite añadir un bloque de
memoria a otro. Los dos bloques deben terminar con un carácter nulo. */

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	while (dest[i] != '\0')
		++i;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (dstsize <= i)
		res += dstsize;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
/*
int main()
{
	char s1[10] = "hello";
	//char s2[20] = "urduliz42balcalde";
	//int ret;
	//int len = 11;

	printf("%zu", ft_strlcat(s1, "balcalde", 0));
	return (0);
}
*/
