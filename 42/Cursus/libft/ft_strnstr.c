/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:42:32 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/07 15:18:59 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	char	*bigc;
	char	*littlec;
	int		i;
	int		j;

	i = 0;
	bigc = ((char *)big);
	littlec = ((char *)little);
	if (!littlec || littlec[0] == '\0')
		return (bigc);
	while (bigc[i] && (size_t)i < len)
	{
		j = 0;
		while (bigc[i + j] == littlec[j])
		{
			if (littlec[j + 1] == '\0')
				return (bigc + i);
			if (bigc[i] == '\0')
				return (NULL);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*big = "Je suis une loutre";
// 	const char	*little = "";
// 	size_t	len;

// 	len = 15;
// 	printf("%s\n", ft_strnstr(big, little, len));
// }