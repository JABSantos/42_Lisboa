/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:39:57 by josantos          #+#    #+#             */
/*   Updated: 2021/01/09 18:26:08 by josantos         ###   ########.fr       */
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
			linhas('o', '-', 'o', x);
		}
		else if (f == y)
		{
			linhas('o', '-', 'o', x);
		}
		else
		{
			linhas('|', ' ', '|', x);
		}
		f++;
	}
}
