/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:45:23 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/20 18:23:07 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*PUTSTR_FD envía el STR S al DESCRIPTOR DE ARCHIVO dado.
Sin valor de retorno.
Función Escritura permitida*/

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
			write(fd, &s[i++], 1);
}
/*
int	main(void)
{
	char s[] = "QueridoTango";

	ft_putstr_fd(s, 1);
}*/