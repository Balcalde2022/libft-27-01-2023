/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:39:02 by balcalde          #+#    #+#             */
/*   Updated: 2023/01/04 09:38:23 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_line_counter(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		count++;
	}
	return (count);
}

static char	*ft_splitdup(const char *s, size_t start, size_t finish)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!dest)
		return (NULL);
	while (start < finish)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

static char	**ft_fill_split(char **dest, const char *s, char c)
{
	size_t	i;
	size_t	p1;
	size_t	start;

	i = 0;
	p1 = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || i == ft_strlen(s))
				dest[p1++] = ft_splitdup(s, start, i);
		}
		while (s[i] == c && s[i])
		{
			i++;
			start = i;
		}
	}
	dest[p1] = NULL;
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (ft_line_counter(s, c) + 1));
	if (!dest)
		return (NULL);
	ft_fill_split(dest, s, c);
	return (dest);
}
/*
int main(void)
{
   char const *s = "Hola 42Urduliz y Querido Tango Bilbao";
   char c = ' ';
   char **result = ft_split(s, c);
   int substr = 0;
 
   while (result[substr])
   {
       printf("Substr n.%d: %s\n", substr, result[substr]);
       substr++;
   }
   //printf("%s", ft_split(s, c));
   return (0);
} 
*/