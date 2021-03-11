/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:58:45 by josantos          #+#    #+#             */
/*   Updated: 2021/03/11 19:58:31 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		get_case(char *str, t_flags *flags, va_list args)
{
	int	a;

	a = 0;
	if (str[a] == 'c')
		return (case_c(flags, args));
	else if (str[a] == 's')
		return (case_s(flags, args));
	/*else if (str[a] == 'p')
		return (case_p(flags, args));
	else if (str[a] == 'd')
		return (case_d_i(flags, args));
	else if (str[a] == 'i')
		return (case_di(flags, args));
	else if (str[a] == 'u')
		return (case_u(flags, args));
	else if (str[a] == 'x')
		return (case_x(flags, args));
	else if (str[a] == 'X')
		return (case_capital_x(flags, args));*/
	else if (str[a] == '%')
		return (case_percentage(flags));
	return (0);
}
