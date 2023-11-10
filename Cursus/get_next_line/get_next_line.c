/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:32:30 by ziratya           #+#    #+#             */
/*   Updated: 2023/11/10 14:27:20 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*s_and_c(char *stash)
{
	char	*line;
	
	line = ft_strchr(stash, '\n');
	if (line != NULL)
		stash = ft_strdup(stash + ft_strlen(line));
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buff;
	char		*line;
	long int	readed;

	line = NULL;
	while (line == NULL)
	{
		line = s_and_c(stash);
		if (line != NULL)
			return (line);
		readed = read(fd, buff, BUFFER_SIZE);
		if (readed == 0)
			return (NULL);
		stash = ft_strjoin(stash, buff);
		free(buff);
	}
	return (NULL);
}
int   main(int ac, char **av)
{
  char  *line;
  int   fd1;
  int   fd2;

  fd1 = open(av[1], O_RDONLY);
  fd2 = open(av[2], O_RDONLY);
  get_next_line(fd1);
  printf("%s\n", line);
  get_next_line(fd1);
  printf("%s\n", line);
  get_next_line(fd2);
  printf("%s\n", line);
  get_next_line(fd2);
  printf("%s\n", line);
  get_next_line(fd1);
  printf("%s\n", line);
  get_next_line(fd2);
  printf("%s\n", line);
  get_next_line(fd1);
  printf("%s\n", line);
  get_next_line(fd2);
  printf("%s\n", line);
  return (0);
}