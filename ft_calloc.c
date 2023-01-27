/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:49:34 by balcalde          #+#    #+#             */
/*   Updated: 2023/01/02 10:21:57 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Asigna una matriz en la memoria con elementos que se inicializan en 0
 * calloc devuelve un puntero al espacio asignado. El espacio de 
 * almacenamiento al que apunta el valor devuelto se alinea correctamente 
 * para el almacenamiento de cualquier tipo de objeto. Para obtener un puntero
 * a un tipo distinto de void, use una conversión de tipo en el valor devuelto.
 * */

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			amt;
	size_t			i;

	amt = count * size;
	ptr = malloc(amt);
	if (!ptr)
		return (0);
	i = 0;
	while (i < amt)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main( void )
{
   long *buffer;

   buffer = (long *)calloc( 40, sizeof( long ) );
   if( buffer != NULL )
      printf( "Allocated 40 long integers\n" );
   else
      printf( "Can't allocate memory\n" );
   free( buffer );
}
*/
