/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_percentage.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:58:25 by josantos          #+#    #+#             */
/*   Updated: 2021/03/08 19:24:10 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int		case_percentage(t_flags *flags)
{
	int		count;

	count = 0;
	if (flags->minus && flags->min_width)
	{
		count += ft_putchar('%');
		while (--flags->min_width)
			count += ft_putchar(' ');
	}
	else if (flags->min_width)
	{
		while (flags->zero && --flags->min_width)
			count += ft_putchar('0');
		while (!flags->zero && --flags->min_width)
			count += ft_putchar(' ');
		count += ft_putchar('%');
	}
	else
		count += ft_putchar('%');
	return (count);
}
