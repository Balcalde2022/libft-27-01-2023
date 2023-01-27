/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:56:52 by balcalde          #+#    #+#             */
/*   Updated: 2023/01/27 08:09:51 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_SUBSTR asigna (malloc) Devuelve una subcadena de la cadena S. La subcadena
 comienza en el índice INICIO El tamaño máximo es LEN. Devuelve la subcadena 
 o NULL si falla la asignación.
 s: La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que empezar la substring.
len: La longitud máxima de la substring.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i_s;
	size_t	aux;

	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub || !s)
		return (NULL);
	i_s = 0;
	aux = 0;
	while (s[aux])
	{
		if (aux >= start && i_s < len)
			sub[i_s++] = s[aux];
		aux++;
	}
	sub[i_s] = '\0';
	return (sub);
}
/*
int main()
{
    char src[] = "substr,la cadena que necesitamos";
 
    int m = 7;
    int n = 25;
 
    char* dest = ft_substr(src, m, n);
 
    printf("%s\n", dest);
 
    return 0;
}*/
