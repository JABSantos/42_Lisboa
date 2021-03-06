/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:39:57 by josantos          #+#    #+#             */
/*   Updated: 2021/01/09 18:35:39 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	linhas(char a, char b, char c, int x)
{
	int	e;

	e = 1;
	while (e <= x)
	{
		if (e == 1)
		{
			ft_putchar(a);
		}
		else if (e == x)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		e++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int f;

	f = 1;
	while (f <= y)
	{
		if (f == 1)
		{
			linhas('A', 'B', 'A', x);
		}
		else if (f == y)
		{
			linhas('C', 'B', 'C', x);
		}
		else
		{
			linhas('B', ' ', 'B', x);
		}
		f++;
	}
}
