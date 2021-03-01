/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 15:06:20 by josantos          #+#    #+#             */
/*   Updated: 2021/01/14 15:14:00 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main()
{
	int *a;
	int *b;
	int a1;
	int b1;

	a1 = 0;
	b1 = 42;
	a = &a1;
	b = &b1;
	printf("valor de a1 ser %d e b1 ser %d \n", a1, b1);
	ft_swap(a, b);
	printf("valor de a1 agora ser %d, e b1 ser %d \n", a1, b1); 
}
