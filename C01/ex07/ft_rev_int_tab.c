/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:04:44 by josantos          #+#    #+#             */
/*   Updated: 2021/01/14 12:43:38 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int vazio;
	int count;

	count = 0;
	while (count != size / 2)
	{
		vazio = tab[count];
		tab[count] = tab[size - (count + 1)];
		tab[size - (count + 1)] = vazio;
		count++;
	}
}
