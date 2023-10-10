/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:06:51 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/07 15:34:39 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (dest < src)
		{
			*(char *)(dest + n) = *(char *)(src + n);
			n--;
		}
		else
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return ((char *)dest);
}

// int	main(void)
// {
// 	char src[] = "Helozik";
// 	char *dest = src + 3;

// 	printf("%s", (char *)ft_memmove(dest, src, 3));
// }