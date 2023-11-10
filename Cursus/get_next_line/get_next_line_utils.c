/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:26:07 by ziratya           #+#    #+#             */
/*   Updated: 2023/11/10 13:41:12 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[j + i] = s2[j];
		j++;
	}
	new[j + i] = '\0';
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;

	j = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len && ft_strlen(s + start) < len)
		len = ft_strlen(start + s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[j] = '\0';
		return (str);
	}
	while (s[start] && j < len)
	{
		str[j] = s[start];
		start++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	nc;
	char			*ptr;

	nc = ((unsigned char)c);
	ptr = ((char *)s);
	while (ptr[0])
	{
		if (ptr[0] == nc)
			return (ptr);
		ptr++;
	}
	if (ptr[0] == nc)
		return (ptr);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		slen;

	slen = ft_strlen(s);
	i = 0;
	str = malloc(sizeof (char) * (slen + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}