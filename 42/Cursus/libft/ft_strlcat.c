/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:05:34 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/07 15:36:15 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	count)
{
	size_t	destsize;
	size_t	srcsize;
	size_t	i;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	i = 0;
	if (count - 1 <= destsize)
		return (srcsize + count);
	while (i < count)
	{
		dest[i + srcsize] = src[i];
		i++;
	}
	dest[destsize + srcsize] = "\0";
	return (srcsize + destsize);
}
