/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:32:43 by balcalde          #+#    #+#             */
/*   Updated: 2023/01/02 09:44:26 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función atoi () se usa para convertir una cadena en un entero (int), y su
 * prototipo es:
int atoi (const char * str);

[Descripción de la función] La función atoi () escanea la cadena de parámetros,
omite los caracteres en blanco anteriores (como espacios, sangría de 
tabulación, etc.), no inicia la conversión hasta que encuentra un número o 
un signo, y luego encuentra un non-number O la conversión termina cuando la 
cadena termina ('\ 0'), y se devuelve el resultado.
[Valor de retorno] Devuelve el entero convertido; si str no se puede convertir
a int o str es una cadena vacía, se devolverá 0.
codigo ascii 09 = HT ( Tabulador horizontal )
codigo ascii 10 = LF ( Nueva línea - salto de línea )
codigo ascii 11 = VT ( Tabulador vertical )
codigo ascii 12 = FF ( Nueva página - salto de página )
codigo ascii 13 = CR ( ENTER - retorno de carro )
codigo ascii 32 = espacio ( Espacio en blanco )
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	val;

	i = 0;
	n = 0;
	val = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			val *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - ('0'));
		i++;
	}
	return (n * val);
}
/*
int main(void)
{
	char *str;
	int p;

	str = "-2147483648";
	p = ft_atoi(str);
	printf("%d", p);
	return (0);
}
*/
/*
 int main () 
{
   int val;
   char str[20];

   strcpy(str, "-98993489");
   val = ft_atoi(str);
   printf("valor del string = %s, Valor del int = %d\n", str, val);

   strcpy(str, "Queridotango");
   val = ft_atoi(str);
   printf("valor del string = %s, Valor del int = %d\n", str, val);

   return(0);
}
*/
