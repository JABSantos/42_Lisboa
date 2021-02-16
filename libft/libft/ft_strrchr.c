/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:05:05 by josantos          #+#    #+#             */
/*   Updated: 2021/02/13 16:12:20 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int a;
	int b;

	a = 0;
	b = ft_strlen(s);
	while (b >= 0)
	{
		if (s[b] == c)
			return (((char *)s) + b);
		b--;
	}
	return (0);
}
