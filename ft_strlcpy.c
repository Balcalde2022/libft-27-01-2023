/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:42:52 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/27 10:33:04 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Las funciones strlcpy() y strlcat() copian y concatenan cadenas 
 * respectivamente. Están diseñados para ser reemplazos más seguros, más 
 * consistentes y menos propensos a errores para strncpy(3) y strncat(3).
 * A diferencia de esas funciones, strlcpy() y strlcat() toman el tamaño 
 * completo del búfer (no solo la longitud) y garantizan la terminación NUL del
 * resultado (siempre que el tamaño sea mayor que 0 o, en el caso de strlcat()
 * , siempre que haya al menos un byte libre en dst). Tenga en cuenta que se 
 * debe incluir un byte para el NUL en el tamaño. También tenga en cuenta que
 * strlcpy() y strlcat() solo funcionan en cadenas "C" verdaderas. Esto 
 * significa que para strlcpy() src debe terminar en NUL y para strlcat() 
 * tanto src como dst deben terminar en NUL.*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
/*
int main ()
{
    char dst[] = "Balcaldeeeee";
    char src[] = "42Urduliz";

    ft_strlcpy(dst, src, sizeof(src));
    printf("%s", dst);
} 
*/