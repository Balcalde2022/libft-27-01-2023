/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:39:12 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/20 16:45:06 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Ft_putchar_fd() escribe el carácter c en el descriptor de archivo fd.
  *
  * param char c el caracter a imprimir
  * param int fd descriptor de archivo
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
