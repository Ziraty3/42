/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:39:27 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/07 15:33:53 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = ((char *)s1);
	str2 = ((char *)s2);
	i = 0;
	while ((str1 || str2) && i <= n)
	{
		if (str1[i] < str2[i])
			return (-1);
		else if (str1[i] > str2[i])
			return (1);
		i++;
	}
	return (0);
}
// int	main(int argc, char **argv)
// {
// 	char	*s1 = argv[1];
// 	char	*s2 = argv[2];
// 	if (argc != 3)
// 	{
// 		printf("%s", "Need 2 arguments");
// 		return (0);
// 	}
// 	printf("%i", ft_strncmp(s1, s2, 4*sizeof(char)));
// }
