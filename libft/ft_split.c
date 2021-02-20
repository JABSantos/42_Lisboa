/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:30:00 by josantos          #+#    #+#             */
/*   Updated: 2021/02/20 15:58:44 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		stringnumb(char const *s, char c)
{
	int numb;
	int a;
	int b;

	a = 0;
	b = 0;
	numb = 0;
	while (s[a])
	{
		if (s[a] == c)
		{
			if (b != 0)
				numb++;
			b = 0;
		}
		else
			b++;
		a++;
	}
	return (numb + (b != 0 ? 1 : 0));
}

char	**ft_split(char const *s, char c)
{
	int a;
	char **p;

	a = 0;
	if (s == 0)
		return (0);
	if (!(p = (char **)malloc(char *) * stringnumb(s, c) + 1))
		return (0);

}
