/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:57:54 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/20 18:07:31 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRJOIN asigna (malloc)
Devuelve una nueva cadena = concatenación os S1 y S2.
Si la asignación falla, devuelve NULL.*//*STRJOIN asigna (malloc)
Devuelve una nueva cadena = concatenación os S1 y S2.
Si la asignación falla, devuelve NULL.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2)+ 1) * sizeof(char));
	if (!s1 && !s2)
		return (0);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
 int main()
{
    char    s1[] = "Balcalde esta aprendiendo en ";
    char    s2[] = "42 urduliz";
    printf ("%s\n", ft_strjoin(s1, s2));
    return (0);
} */
