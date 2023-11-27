/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:56:26 by gvalogne          #+#    #+#             */
/*   Updated: 2023/11/20 14:37:34 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int		p_length;
	va_list args;
	int		i;

	p_length = 0;
	va_start(args, str);
	while (str[i])
	{
		
	}
	return (p_length);
}

int main(void)
{
	
}