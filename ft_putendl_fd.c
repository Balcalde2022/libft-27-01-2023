/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:48:51 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/20 16:52:18 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** PUTENDL_FD envía el STR S al DESCRIPTOR DE ARCHIVO dado.
Agregue una NUEVA LÍNEA.
Sin valor de retorno.
Función ESCRIBIR permitida.
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s && fd)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	char s[] = "QueridoTango";

	ft_putendl_fd(s, 1);
    return(0);
} */