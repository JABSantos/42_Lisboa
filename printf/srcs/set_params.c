/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:15:26 by josantos          #+#    #+#             */
/*   Updated: 2021/03/11 19:49:18 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_star(t_flags *flags, int arg)
{
	if (arg < 0 && !flags->point)
	{
		if (!flags->minus)
			flags->minus = 1;
		arg = arg * -1;
	}
	if (!flags->point)
		flags->min_width = arg;
	else
		flags->precision = arg;
	flags->star += 1;
}

int		handle_width(char *str, t_flags *flags)
{
	int a;

	a = 0;
	if (!flags->point)
		flags->min_width = ft_atoi(str);
	else
		flags->precision = ft_atoi(str);
	while (ft_isdigit(str[a]))
		a++;
	return (--a);
}

int		set_params(char *str, t_flags *flags, va_list args)
{
	int a;

	a = -1;
	while (str[++a])
	{
		if (str[a] == '-')
			flags->minus = 1;
		else if (str[a] == '0' && !flags->minus)
			flags->zero = 1;
		else if (str[a] == '*')
			handle_star(flags, va_arg(args, int));
		else if (ft_isdigit(str[a]))
			a += handle_width(&str[a], flags);
		else if (str[a] == '.')
			flags->point = 1;
		else if (ft_strchr("cspdiuxX%", str[a]) && a != 0)
		{
			flags->type = str[a];
			break ;
		}
		else if (ft_isalpha(str[a]))
			break ;
	}
	return (flags->type == 0 ? 0 : a);
}
