/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:19:48 by josantos          #+#    #+#             */
/*   Updated: 2021/03/15 11:21:01 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*handle_neg(t_flags *flags, char *p)
{
	char		*temp;

	temp = p;
	p = ft_substr(p, 1, (int)ft_strlen(p));
	free(temp);
	while (flags->precision > (int)ft_strlen(p))
	{
		temp = p;
		p = ft_strjoin("0", p);
		free(temp);
	}
	temp = p;
	p = ft_strjoin("-", p);
	free(temp);
	return (p);
}

char		*handle_pos(t_flags *flags, char *p)
{
	char		*temp;

	if (!ft_strncmp(p, "0", 1) && flags->point && !flags->precision)
	{
		temp = p;
		p = ft_strdup("");
		free(temp);
	}
	while (flags->precision > (int)ft_strlen(p))
	{
		temp = p;
		p = ft_strjoin("0", p);
		free(temp);
	}
	return (p);
}
