/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:03:49 by josantos          #+#    #+#             */
/*   Updated: 2021/01/14 13:25:21 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main()
{
	int a;
	int *p;

	a = 18;
	p = &a;
	printf("value of a is %d. \n", *p);
	ft_ft(p);
	printf("value of a is now %d. \n", *p);
}
