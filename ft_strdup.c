/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:50:03 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/20 18:02:23 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**STRDUP asigna memoria suficiente para una copia de la cadena S1
Después, hace la copia y le devuelve un puntero.
El puntero se puede utilizar como argumento de la función free.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		cpy;
	int		i;

	cpy = 0;
	i = 0;
	copy = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (s1[i])
		copy[cpy++] = s1[i++];
	copy[i] = '\0';
	return ((char *)copy);
}
/*
int main()
{
	char *s1 = "Hola Balcalde 42Urduliz";
	//dst = strdup(s1);
	printf("%s\n", ft_strdup(s1));
} 
*/
