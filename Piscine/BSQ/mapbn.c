/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapbn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:28:05 by andypere          #+#    #+#             */
/*   Updated: 2023/08/01 17:59:19 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int    **mapbn(char vide, char block)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    int    **matbn;
    matbn = ft_split(file_str("map.txt"), "\n");
    while(matbn[j] != NULL)
    {
        i = 0;
        while(matbn[j][i] != '\0')
        {
            if(matbn[j][i] == vide)
                matbn[j][i] = 0;
            else if(matbn[j][i] == block)
                matbn[j][i] = 1;
            i++;    
        }
        j++;
    }
    return (matbn);
}
