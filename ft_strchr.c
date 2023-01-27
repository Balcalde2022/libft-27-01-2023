/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:05:39 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/27 12:13:41 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
La strchr función busca la primera aparición de c en str , o devuelve NULL si
c no se encuentra. En la búsqueda se incluye el carácter nulo de terminación */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main()
{
	char str[] = "http://www.queridotangobilbao.com";
	char ch = '.';
	char *ret;

	ret = ft_strchr(str, ch);
	printf("el string despues de c |%c| es - |%s|\n", ch, ret);
	return (0);
}
*/
