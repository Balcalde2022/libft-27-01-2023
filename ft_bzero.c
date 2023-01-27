/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:24:52 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/29 09:29:59 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función bzero() pone a cero los n primeros bytes de la cadena de bytes s
 * VALOR DEVUELTO. La función bzero() no devuelve ningún valor. */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 2);
	puts(str);
	return (0);
}
*/
