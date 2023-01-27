/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:26:08 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/29 08:57:31 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función memcmp devuelve un entero mayor que, igual a o menor que cero,
 * según si el objeto al cual señala s1 es mayor que, igual a o menor que el
 * objeto al cual señala s2. */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (*ptr1 == *ptr2 && ++i < n)
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
/*
int main(void)
{
	char str1[50] = "uribe kostan";
	char str2[50] = "uribe kosta urdulizn";
	int n = 14;
	printf("%d", ft_memcmp(str1, str2, n));
	return (0);
}
*/
