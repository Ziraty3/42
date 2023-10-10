/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:44:35 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/07 15:36:23 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

// int	main(void)
// {
// 	printf("%c", tolower('A'));
// 	printf("%c", tolower('Z'));
// 	printf("%c", tolower('z'));
// }