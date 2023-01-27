/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:57:04 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/21 13:07:35 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*** Aplica la función f a cada carácter de la cadena pasada como argumento 
 * dando su índice como primer argumento para crear una nueva cadena nueva 
 * (con malloc(3)) resultante de las sucesivas aplicaciones de f.
** Parámetro #1 La cadena a mapear.
** Parámetro #2 La función a aplicar a cada carácter de s y su índice.
** Valor de retorno La cadena "nueva" creada a partir de las sucesivas 
**aplicaciones.
** Funciones libc malloc(3)*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
*/
/*
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

int main()
{
	int(*fp)(int, int);

	fp = add;
	printf("%d\n", fp(10, 20)); //30

	fp = mul;
	printf("%d\n", fp(10, 20)); //200
}
*/