/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:58:45 by josantos          #+#    #+#             */
/*   Updated: 2021/03/11 19:53:39 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int			handle_minus(char *p, t_flags *flags, va_list args)
{
	int		count;

	count = 0;
	if (flags->precision < (int)ft_strlen(p) && flags->precision != -1)
	{
		count += ft_putstr_len(p, flags->precision);
		if (flags->precision == 0)
		{
			while (--flags->min_width)
				count += ft_putchar(' ');
		}
		else
			while (--flags->min_width >= flags->precision)
				count += ft_putchar(' ');
	}
	else
	{
		count += ft_putstr_len(p, (int)ft_strlen(p));
		while (--flags->min_width >= (int)ft_strlen(p))
			count += ft_putchar(' ');
	}
	return (count);
}

int			handle_width_s(char *p, t_flags *flags)
{
	int		count;

	count = 0;
	if (flags->precision < (int)ft_strlen(p) && flags->precision != -1)
	{
		if (flags->precision == 0)
		{
			while (flags->min_width--)
				count += ft_putchar(' ');
		}
		else
			while (--flags->min_width > ((int)ft_strlen(p) - flags->precision))
				count += ft_putchar(' ');
		count += ft_putstr_len(p, flags->precision);
	}
	else
	{
		while (--flags->min_width >= (int)ft_strlen(p))
			count += ft_putchar(' ');
		count += ft_putstr_len(p, (int)ft_strlen(p));
	}
	return (count);
}

int			case_s(t_flags *flags, va_list args)
{
	int		count;
	char	*p;

	count = 0;
	p = va_arg(args, char *);
	if (!p)
		p = "(null)";
	if (flags->precision < -1)
		flags->precision = ft_strlen(p);
	if (flags->point != 0 && flags->precision == -1)
		flags->precision = 0;
	 if (flags->minus && (flags->min_width >= (int)ft_strlen(p)))
		count += handle_minus(p, flags, args);
	 else if (flags->precision == 0 || flags->min_width > (int)ft_strlen(p))
	 {
		 if (flags->precision == 0)
			 count += handle_width_s(p, flags);
		else if (flags->min_width > (int)ft_strlen(p))
			count += handle_width_s(p, flags);
	 }
	else if (flags->precision != -1)
		count += ft_putstr_len(p, flags->precision);
	else
		count += ft_putstr_len(p, ft_strlen(p));
	return (count);
}
