/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:10:43 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/28 08:23:45 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función strrchr() en C/C++ localiza la última aparición de un carácter 
 * en una string. Devuelve un puntero a la última aparición en la string. El 
 * carácter nulo de terminación se considera parte de la string C. Por lo 
 * tanto, también se puede ubicar para recuperar un puntero al final de una 
 * string */

char	*ft_strrchr(const char *s, int c)
{
	int	start;

	start = ft_strlen(s);
	while (start >= 0)
	{
		if (s[start] == (char)c)
			return ((char *)&s[start]);
		start--;
	}	
	return (NULL);
}
/*
int main()
{
	char str[] = "http://www.queridotangobilbao.com";
	char ch = '.';
	char *ret;

	ret = ft_strrchr(str, '.');
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/
