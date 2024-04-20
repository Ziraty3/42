/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:38:54 by ziratya           #+#    #+#             */
/*   Updated: 2024/02/21 12:45:15 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char get_char(int sig)
{
	static unsigned char	c = 0;
	c |= (sig == SIGUSR2);
	c <<= 1;
	return(c);
}

int get_size(int sig, int bits)
{
	static int	bits = 0;
	static int	size = 0;

	size |= (sig == SIGUSR2);
	size <<= 1;
	if (bits == 32)
		return(size);
	return(0);
}
