/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:20:56 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/28 09:42:33 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función de biblioteca C *memchr busca la primera aparición del carácter
 * c (un carácter sin signo) en los primeros n bytes de la cadena a la que
 * apunta, mediante el argumento str 
 * str : este es el puntero al bloque de memoria donde se realiza la búsqueda.

   c : este es el valor que se pasa como un int, pero la función realiza una 
   búsqueda byte por byte utilizando la conversión de caracteres sin signo de 
   este valor.
   n − Este es el número de bytes a analizar..
   Esta función devuelve un puntero al byte coincidente o NULL si el carácter
   no aparece en el área de memoria dada.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			count;

	count = 0;
	temp = (unsigned char *)s;
	while (count < n)
	{
		if (temp[count] == (unsigned char)c)
			return (temp + count);
		count++;
	}
	return (0);
}
/*
int	main(void)
{
	char	src[50] = "escala42urduliz";
	char *ret;

	ret = ft_memchr(src, 's', 15);
	printf("%s", ret);
	return (0);
}
*/
