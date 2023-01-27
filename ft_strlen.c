/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:49:49 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/27 09:59:00 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strlen interpreta la cadena como una cadena de caracteres de un solo byte, 
 * de modo que el valor devuelto siempre es igual al número de bytes, incluso 
 * si la cadena contiene caracteres multibyte */

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
	char *s;

	str = "42urduliz";
	printf("%zu", ft_strlen(str));
	return (0);
}
*/
