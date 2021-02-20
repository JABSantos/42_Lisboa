/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:32:11 by josantos          #+#    #+#             */
/*   Updated: 2021/02/19 19:39:41 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	a;

	a = 0;
	if ((p = malloc(size * count)) == 0)
		return (0);
	while (p[a])
	{
		p[a] = '\0';
		a++;
	}
	return (p);
}
