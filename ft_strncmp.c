/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:16:56 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/28 09:16:31 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función strncmp realiza una comparación ordinal de, a lo sumo, contamos los
caracteres de string1 y string2 , y devuelve un valor que indica la relación
entre ambas subcadenas. strncmp es una versión de _strnicmp que distingue 
entre mayúsculas y minúsculas.*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0' && a < n - 1)
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
/*
int main(void)
{
	char *s1;
	char *s2;
	int ret;

	s1 = "zyxbcdefgh";
	s2 = "abcdwxyz";
	printf("%d", ft_strncmp(s1, s2, 0));
	//printf("%d", ret);
	return (0);
}
*/
