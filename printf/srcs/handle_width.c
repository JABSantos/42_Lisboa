/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:04:48 by josantos          #+#    #+#             */
/*   Updated: 2021/03/13 15:54:04 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		handle_width(t_flags *flags, int len)
{
	int count;

	count = 0;
	while (flags->min_width-- > len)
	{
		if (!flags->zero)
		{
			count += ft_putchar(' ');
		}
		if (flags->zero)
		{
			count += ft_putchar('0');
		}
	}
	return (count);
}
