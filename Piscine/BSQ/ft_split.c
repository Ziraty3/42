/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andypere <andypere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:50:57 by andypere          #+#    #+#             */
/*   Updated: 2023/08/01 15:21:29 by andypere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src, int i, int debut)
{
	char	*new;
	int		j;

	j = 0;
	new = (char *)malloc(sizeof(char) * ((i - debut) + 1));
	while (debut <= i)
	{
		if (src[debut] != ' ')
		{
			new[j] = src[debut];
			j++;
		}
		debut++;
	}
	new[j] = 0;
	return (new);
}

int	ft_strstr(char *str, char *to_find, int i)
{
	int	j;

	if (str[i] == to_find[0])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (to_find[j] == 0)
			return (1);
	}
	i++;
	return (0);
}
int ncarsep(char *str, char *charset)
{
	int	i;
	int	j;
	int	ncar;
	
	j = 0;
	i = 0;
	ncar = 0;
	while(str[i])
	{
		if(str[i] == charset[0])
		{
			j = 0;
			while(str[i + j] == charset[j] && charset[j])
			{
				j++;
				if(charset[j] == 0)
					ncar++;
			}
		}
		i++;
	}
	return (ncar);
}
char	**ft_split(char *str, char *charset)
{
	int		i;
	int		debut;
	char	**s;
	int		j;

	j = ft_strlen(str);
	s = (char **)malloc(sizeof(char *) * (j + (ncarsep(str, charset) + 2)));
	if (s == NULL)
		return (NULL);
	i = 0;
	debut = 0;
	j = 0;
	while (str[i])
	{
		if (ft_strstr(str, charset, i))
		{
			s[j] = ft_strdup(str, i - 1, debut); 
			debut = (i + ft_strlen(charset));
			j++;
		}
		i++;
	}
	s[j] = ft_strdup(str, i, debut);
	s[j + 1] = NULL;
	return (s);
}
