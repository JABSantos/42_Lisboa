/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:46:37 by josantos          #+#    #+#             */
/*   Updated: 2021/01/12 16:45:03 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(n2 / 10 + '0');
			ft_putchar(n2 % 10 + '0');
			if (!(n1 == 98 && n2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
