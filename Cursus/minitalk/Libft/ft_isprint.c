/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:51:20 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/11 16:38:13 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// int main(void)
// {
// 	int c;

// 	c = 0;
// 	while (c <= 127)
// 	{
// 		printf("%c = %d\n", c, ft_isprint(c));
// 		c++;
// 	}
// 	return (1);
// }