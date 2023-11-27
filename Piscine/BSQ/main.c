/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:14:47 by andypere          #+#    #+#             */
/*   Updated: 2023/08/01 18:14:08 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	afficher_str(char **result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(result[j] != 0)
	{
		ft_putstr(result[j]);
		write(1, "\n", 1);
		j++;
	}
}

void	afficher_int(char **result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(result[j] != 0)
	{
		ft_putstr(result[j]);
		write(1, "\n", 1);
		j++;
	}
}

int main(int ac, char **av)
{	
	char *str = file_str("map.txt");
	char **result = ft_split(str, "\n");
	afficher_str(result);
	int	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(str);
	write(1, "\n", 1);
	afficher_str(mapbn('.', 'o')); //afficher la map avec les char changer en chiffres
	//free(mapbn);
}
