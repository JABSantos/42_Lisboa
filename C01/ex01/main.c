/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:25:32 by josantos          #+#    #+#             */
/*   Updated: 2021/01/14 15:01:07 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main()
{
	int a;
	int *p8;
	int **p7;
	int ***p6;
	int ****p5;
	int *****p4;
	int ******p3;
	int *******p2;
	int ********p1;
	int *********nbr;


	a = 18;
	p8 = &a;
	p7 = &p8;
	p6 = &p7;
	p5 = &p6;
	p4 = &p5;
	p3 = &p4;
	p2 = &p3;
	p1 = &p2;
	nbr = &p1;
	printf("value of a is %d \n", *********nbr);
	ft_ultimate_ft(nbr);
	printf("value of a is now %d", *********nbr);
}
