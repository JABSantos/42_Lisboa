/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:37:14 by josantos          #+#    #+#             */
/*   Updated: 2021/03/01 12:30:09 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int				get_next_line(int fd, char **line)
{
	static char *hold[1024];
	char		*str;
	int			reader;

	if (!line || (read(fd, 0, 0) == -1) || BUFFER_SIZE < 1)
		return (-1);
	str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (-1);
	reader = 1;
	while (!hasnl(hold[fd]) && reader != 0)
	{
		if ((reader = read(fd, str, BUFFER_SIZE)) == -1)
		{
			free(str);
			return (-1);
		}
		str[reader] = '\0';
		hold[fd] = strjoin(hold[fd], str);
	}
	free(str);
	*line = beforenl(hold[fd]);
	hold[fd] = afternl(hold[fd]);
	return (reader == 0 ? 0 : 1);
}

char			*beforenl(char *str)
{
	char		*line;
	int			a;

	if (!str)
		return (NULL);
	a = 0;
	while (str[a] && str[a] != '\n')
		a++;
	line = (char *)malloc(sizeof(char) * (a + 1));
	if (!line)
		return (NULL);
	a = 0;
	while (str[a] && str[a] != '\n')
	{
		line[a] = str[a];
		a++;
	}
	line[a] = '\0';
	return (line);
}

char			*afternl(char *str)
{
	char		*p;
	int			a;
	int			b;

	if (!str)
		return (0);
	a = 0;
	while (str[a] && str[a] != '\n')
		a++;
	if (!str[a])
	{
		free(str);
		return (0);
	}
	p = (char *)malloc(sizeof(char) * (ft_strlen(str) - a + 1));
	if (!p)
		return (NULL);
	a++;
	b = 0;
	while (str[a])
		p[b++] = str[a++];
	p[b] = '\0';
	free(str);
	return (p);
}
