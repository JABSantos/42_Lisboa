/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 15:20:42 by josantos          #+#    #+#             */
/*   Updated: 2021/01/14 15:45:20 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 8;
	b = 10;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("resultado de div ser %d e o resto ser %d \n", *div, *mod);
}
