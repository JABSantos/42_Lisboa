/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:45:45 by josantos          #+#    #+#             */
/*   Updated: 2021/02/20 14:28:50 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;
	int		c;
	char	*p;

	a = 0;
	b = ft_strlen(s1);
	c = 0;
	if (s1 == 0)
		return (0);
	while (ft_strchr(set, s1[a]))
		a++;
	while (ft_strchr(set, s1[b]) && b > a)
		b--;
	if (!(p = (char *)malloc(((sizeof(char) * b) + 1))))
		return (0);
	while (a <= b)
	{
		p[c] = s1[a];
		a++;
		c++;
	}
	p[c] = '\0';
	return (p);
}
