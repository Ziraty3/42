/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:32:30 by ziratya           #+#    #+#             */
/*   Updated: 2023/11/24 16:22:17 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	check_buff(int fd, char **line,char **stash)
{
	int		bytes;
	char	*temp;
	char	*buff;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	bytes = read(fd, buff, BUFFER_SIZE);
	buff[bytes] = '\0';
	*line = ft_strchr(buff, '\n');
	while (line == NULL)
	{
		temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!temp)
			return (NULL);
		bytes = read(fd, temp, BUFFER_SIZE);
		temp[bytes] = '\0';
		buff = ft_strjoin(buff, temp);
		free (temp);
		*line = ft_strchr(buff, '\n');
	}
	*stash = buff + ft_strlen(line);
	free (buff);
	return (bytes);
}

void	*check_stash(char **stash, char **line)
{
	int	end;

	*line = ft_strchr(*stash, '\n');
	end = ft_strlen(*stash) - ft_strlen(*line);
	if (line != NULL)
		*stash = ft_substr(*stash, ft_strlen(*line),  end);
}

char	*get_next_line(int fd)
{
	static char	stash[BUFFER_SIZE];
	char		*line;
	int	bytes;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (NULL);
	check_stash(&stash, &line);
	if (line != NULL)
		return (line);
	bytes = check_buff(fd, &line, &stash);
	if (line != NULL)
		return (line);
	
	
}

// int	main()
// {
// 	int fd = open("nl", O_RDONLY);
// 	char *res = get_next_line(fd);
// 	while (res)
// 	{
// 		printf("%s", res);
// 		free(res);
// 		res = get_next_line(fd);
// 	}
// 	free(res);
// 	return (0);
// }