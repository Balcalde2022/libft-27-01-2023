/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:27:42 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/26 09:22:55 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*isascii() comprueba si c es un valor unsigned char de 7 bits, que encaje
 * dentro del conjunto de caracteres ASCII */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	char c = '+';
	printf("%d", ft_isascii(c));
	return (0);
}
*/
