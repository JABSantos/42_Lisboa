/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:29:40 by josantos          #+#    #+#             */
/*   Updated: 2021/01/14 13:03:37 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main()
{
	int tab[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};

	for (int j = 0; j < 9; j++)
	{
		printf("%d, ", tab[j]);

	}
	printf("\n");
	ft_rev_int_tab(tab, 9);
	for (int i = 0; i < 9; i++)
	{
		printf("%d, ", tab[i]);
	}
}
