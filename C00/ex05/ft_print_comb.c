/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:53:13 by josantos          #+#    #+#             */
/*   Updated: 2021/01/12 16:43:17 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = '0' - 1;
	while (c++ < '7')
	{
		d = c;
		while (d++ < '8')
		{
			u = d;
			while (u++ < '9')
			{
				if (!(c == '0' && d == '1' && u == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
			}
		}
	}
}
