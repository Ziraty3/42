/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:11:32 by ziratya           #+#    #+#             */
/*   Updated: 2023/10/09 17:08:37 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = (void *)malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb);
	return (tab);
}
