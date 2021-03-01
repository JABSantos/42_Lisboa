/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:56:17 by josantos          #+#    #+#             */
/*   Updated: 2021/01/12 23:02:13 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int a;
	int b;
	a = 5;
	b = 8;
	int *e;
	int *f;
	e = &a;
	f = &b;

	ft_ultimate_div_mod(e, f);
	printf("divisao ser %d \n", *e);
	printf("modulo ser %d \n", *f);
	return(0);
}
