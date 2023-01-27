/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:33:41 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/26 11:17:09 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función memcpy copia n caracteres del objeto al cual señala s2 al objeto
 * al cual señala s1. Si la copia tiene lugar entre objetos que se superponen,
 * el comportamiento queda indefinido*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char src[50] = "balcalde42urduliz";
	char dest[50];
	char *ret;

	ret = ft_memcpy(dest, src, 9);
	printf("%s", ret);
	return (0);
}
*/
