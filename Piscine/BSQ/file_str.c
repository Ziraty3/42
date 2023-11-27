/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andypere <andypere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:16:23 by gvalogne          #+#    #+#             */
/*   Updated: 2023/08/01 15:21:20 by andypere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	freeandclose(char *buffer, int file_descriptor)
{
	free(buffer);
	close(file_descriptor);
}

char	*file_str(char *path)
{
	unsigned long int	file_size;
	unsigned int		chunk_size;
	int					file_descriptor;
	ssize_t				bytes_read;
	char				*buffer;

	chunk_size = 4096;
	file_size = 0;
	file_descriptor = open(path, O_RDONLY);
	buffer = (char *)malloc(chunk_size);
	if (file_descriptor == -1)
		write(1, "File not found!", 15);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (NULL);
	}
	bytes_read = read(file_descriptor, buffer, chunk_size);
	while (bytes_read > 0)
	{
		bytes_read = read(file_descriptor, buffer, chunk_size);
		file_size += bytes_read;
	}
	return (buffer);
}
