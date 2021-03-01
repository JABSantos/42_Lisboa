/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 21:50:34 by josantos          #+#    #+#             */
/*   Updated: 2021/01/16 22:48:10 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main()
{
	char a[] = "afakkm";
	char b[] = "5432";
	char c[] = "\'lfsfs54";

	ft_str_is_numeric(a);
	ft_str_is_numeric(b);
	ft_str_is_numeric(c);
	printf("tem que dar 0: %d\n", ft_str_is_numeric(a));
	printf("tem que dar 1: %d\n", ft_str_is_numeric(b));
	printf("tem que dar 0: %d\n", ft_str_is_numeric(c));
}
