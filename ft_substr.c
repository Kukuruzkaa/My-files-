/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:20:08 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/10 10:34:28 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;

	i = 0;

	char *s2new = (char*)malloc(sizeof(char)*(len + 1));
	
	if (s2new == NULL)
		return (NULL);
	int j;

	j = 0;
	while (s[i] != 0)
	{	
		if (i >= start && j < len)
		{
			s2new[j] = s[i];
				j++;;
		}
		i++;
	}
	s2new[j] = '\0';
	return (s2new);
}


char *ft_substrr(char const *s, unsigned int start, size_t len)
{
	char *s2new = (char*)malloc(sizeof(char)*(len + 1));
	
	if (s2new == NULL)
		return (NULL);
	size_t j;

	j = 0;
/*abcdefgh
01234567

def
012*/

	while (j < len)
	{
		s2new[j] = s[j + start];
			j++;
	}
	s2new[j] = '\0';
	return s2new;
}


int		main(void)
{
	const char str[] = "abcdefghijkl";

	printf("%s\n", ft_substrr(str, 2, 5));
	return (0);
}
