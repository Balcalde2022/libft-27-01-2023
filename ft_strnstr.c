/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:27:55 by balcalde          #+#    #+#             */
/*   Updated: 2023/01/02 08:10:51 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Busca la secuencia de carácteres contenida en la subcadena en una cadena 
 * de texto.
Esta función determinará si la cadena contiene a la subcadena (como "CASA" 
contiene "ASA") y, en caso afirmativo, indicará en que posición aparece la 
subcadena dentro de la cadena (de 0 en adelante, 1 en el ejemplo anterior). 
En caso de aparecer la subcadena varias veces, la función siempre retornará 
la posición primera.

*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int		i;
	unsigned int		j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
int main () {
   const char haystack[20] = "borjaalcalde";
   const char needle[10] = "alcalde";
   char *ret;

   ret = strstr(haystack, needle);

   printf("la subcadena es: %s\n", ret);
   
   return(0);
}
*/
