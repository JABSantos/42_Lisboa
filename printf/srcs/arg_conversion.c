/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:44:25 by josantos          #+#    #+#             */
/*   Updated: 2021/03/15 14:15:30 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*arg_conversion(t_flags *flags, va_list args)
{
	if (flags->type == 'd' || flags->type == 'i')
		return (ft_itoa(va_arg(args, int)));
	else if (flags->type == 'u')
		return (ft_itoa_base(va_arg(args, unsigned), "0123456789"));
	else if (flags->type == 'x')
		return (ft_itoa_base(va_arg(args, unsigned), "0123456789abcdef"));
	else if (flags->type == 'X')
		return (ft_itoa_base(va_arg(args, unsigned), "0123456789ABCDEF"));
	else if (flags->type == 'p')
		return (ft_l_itoa_base(va_arg(args, unsigned long), "0123456789abcdef"));
	else
		return (NULL);
}
