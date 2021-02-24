/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:15:29 by josantos          #+#    #+#             */
/*   Updated: 2021/02/22 19:16:27 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	printnum(int n)
{
	int		c;

	c = 0;
	if (n == 0)
	{
		c = 1;
		return (c);
	}
	if (n < 0)
		c++;
	while (n)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

char		*ft_itoa(int n)
{
	char	*p;
	int		b;

	b = printnum(n);
	if (!(p = (char *)ft_calloc(sizeof(char), (b + 1))))
		return (0);
	if (n == 0)
		p[0] = '0';
	if (n < 0)
	{
		p[0] = '-';
		if (n == -2147483648)
		{
			p[b-- - 1] = '8';
			n = n / 10;
		}
		n = -n;
	}
	while (n != 0 && b >= 0)
	{
		p[b-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (p);
}
