/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:59:14 by balcalde          #+#    #+#             */
/*   Updated: 2022/12/21 13:10:52 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* STRTRIM allocates (malloc) and returns a copy of STRING S1.
Will be REMOVED the CHARS of STRING SET from the BEGINNING and the END of S1.
If the allocation fails, returns NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
int   main(void)
{
   char    *s1 = "$QueridoTango$";
   char    *set = "$";
 
   printf("%s", ft_strtrim(s1, set));
   return(0);
}
*/