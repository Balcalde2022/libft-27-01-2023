/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:53:04 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/27 08:59:02 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*memcpy() simplemente copia los datos uno por uno de una ubicación a otra.*/
/*Por otro lado, memmove() copia los datos primero a un búfer intermedio,
 * luego desde el búfer al destino.*/
/*memcpy() genera problemas cuando las strings se superponen.
 * Parámetros
dest
Objeto de destino.

src
Objeto de origen.

count
Número de bytes (memmove) o caracteres (wmemmove) que se copiarán.*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if ((size_t)dst > (size_t)src)
	{
		i = len;
		while (i--)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(void)
{
	char str1[50];
	char str2[50] = "urduliz42 balcalde";
	char *ret;

	ret = ft_memmove(str1, str2, 9);
	printf("%s", ret);
	return (0);
}
*/
