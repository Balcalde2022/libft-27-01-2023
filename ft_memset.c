/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:58:58 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/26 10:09:30 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función memset copia el valor de c (convertido a un unsigned char) a cada
 * uno de los primeros n caracteres en el objeto al cual señala s. */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
int	main()
{
	char str[]= "urduliz";
	ft_memset(str, 'a', 5);
	printf("%s", str);
}*/
