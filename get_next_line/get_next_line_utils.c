/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:37:36 by josantos          #+#    #+#             */
/*   Updated: 2021/03/01 12:33:18 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_strlen(char *str)
{
	int		a;

	if (!str)
		return (0);
	a = 0;
	while (str[a])
		a++;
	return (a);
}

int			hasnl(char *str)
{
	int		a;

	a = 0;
	if (!str)
		return (0);
	while (str[a])
	{
		if (str[a] == '\n')
			return (1);
		a++;
	}
	return (0);
}

char		*ft_strdup(char *str)
{
	char	*p;
	int		a;

	p = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!p)
		return (NULL);
	a = 0;
	while (str[a])
	{
		p[a] = str[a];
		a++;
	}
	p[a] = '\0';
	return (p);
}

char		*strjoin(char *s1, char *s2)
{
	int		a;
	int		b;
	char	*p;

	if (!s1)
		return (ft_strdup(s2));
	a = -1;
	b = 0;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p)
		return (NULL);
	while (s1[++a])
		p[a] = s1[a];
	while (s2[b])
	{
		p[a] = s2[b];
		a++;
		b++;
	}
	free(s1);
	p[a] = '\0';
	return (p);
}
