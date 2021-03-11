/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:22:19 by josantos          #+#    #+#             */
/*   Updated: 2021/03/11 19:58:02 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_flags
{
	int			minus;
	int			zero;
	int			star;
	int			min_width;
	int			point;
	int			precision;
	char		type;
}				t_flags;

int				ft_printf(const char *obj, ...);
int				check_obj(char *input, va_list args);
int				set_params(char *str, t_flags *flags, va_list args);
void			handle_star(t_flags *flags, int arg);
int				handle_width(char *str, t_flags *flags);
int				get_case(char *str, t_flags *flags, va_list args);
int				case_percentage(t_flags *flags);
int				case_c(t_flags *flags, va_list args);
int				case_s(t_flags *flags, va_list args);
int				case_p(t_flags *flags, va_list args);
int				case_d_i(t_flags *flags, va_list args);
int				case_u(t_flags *flags, va_list args);
int				case_x(t_flags *flags, va_list args);
int				case_capital_x(t_flags *flags, va_list args);

#endif
